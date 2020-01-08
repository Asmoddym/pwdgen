//
// Generator.cpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/Generator/Generator.cpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:11
// Last modification at: 08 Jan 2020, 14:35:03
//

#include "Generator.hpp"
#include "pwdgen/pwdgen/flags/Length/Length.hpp"
#include "pwdgen/pwdgen/flags/Number/Number.hpp"
#include "pwdgen/pwdgen/flags/NoSymbols/NoSymbols.hpp"
#include "pwdgen/pwdgen/flags/Hexadecimal/Hexadecimal.hpp"
#include "pwdgen/pwdgen/flags/Decimal/Decimal.hpp"
#include "pwdgen/pwdgen/flags/Alphabetical/Alphabetical.hpp"
#include <iostream>
#include <sys/time.h>

pwdgen::Generator::Generator() {
}

pwdgen::Generator::~Generator() {
}

void pwdgen::Generator::init() {
	_parser.addCommand<flags::Length>();
	_parser.addCommand<flags::Number>();
  _parser.addCommand<flags::NoSymbols>();
  _parser.addCommand<flags::Hexadecimal>();
  _parser.addCommand<flags::Decimal>();
  _parser.addCommand<flags::Alphabetical>();
}

int pwdgen::Generator::process(int ac, const char **av) {
	if (_parser.parse(ac, av, 1)) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	generateStrings();
	return 0;
}

void pwdgen::Generator::generateStrings() {
  struct timeval time;
  int iterations;
  int size;

  gettimeofday(&time, NULL);
  srand(time.tv_usec);
  iterations = _parser.getCommand<flags::Number>("Number").get();
  size = _parser.getCommand<flags::Length>("Length").get();
  for (int i = 0; i < iterations; i++) {
    for (int len = 0; len < size; len++) {
      std::cout << static_cast<char>(getRandom());
    }
    std::cout << std::endl;
  }
}

int pwdgen::Generator::getRandom() {
  int c;
  std::string symbols = _parser.getCommand("NoSymbols").hasBeenTriggered() ? "" : "()[]{}#&-_$*=+?;.,!";
  bool condition = false;
  bool hex = _parser.getCommand("Hexadecimal").hasBeenTriggered();
  bool dec = _parser.getCommand("Decimal").hasBeenTriggered();
  bool alpha = _parser.getCommand("Alphabetical").hasBeenTriggered();

  while (!condition) {
    c = rand() % 128;
    if (dec) {
      condition = isIn(c, "0123456789");
    } else if (alpha) {
      condition = isAlphabetical(c);
    } else if (hex) {
      condition = isIn(c, "0123456789abcdef");
    } else {
      condition = isAlphaNumeric(c) ? true : !symbols.empty() && isIn(c, symbols);
    }
  }
  return c;
}

bool pwdgen::Generator::isNumeric(std::string const &str) {
  for (auto &&c: str) {
    if (c < '0' || c > '9') {
      return false;
    }
  }
  return true;
}

bool pwdgen::Generator::isIn(int c, std::string const &str) {
  for (auto &&i: str) {
    if (c == i) {
      return true;
    }
  }
  return false;
}

bool pwdgen::Generator::isAlphaNumeric(int c) {
  return isAlphabetical(c) || (c >= '0' && c <= '9');
}

bool pwdgen::Generator::isAlphabetical(int c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'A');
}
