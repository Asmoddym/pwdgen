//
// Generator.cpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/Generator/Generator.cpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:11
// Last modification at: 06 Jan 2020, 11:47:08
//

#include "Generator.hpp"
#include "pwdgen/pwdgen/flags/Length/Length.hpp"
#include "pwdgen/pwdgen/flags/Number/Number.hpp"
#include "pwdgen/pwdgen/flags/NoSymbols/NoSymbols.hpp"
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

  while (!condition) {
    c = rand() % 128;
    if (isAlphaNumeric(c)) {
      condition = true;
    } else {
      condition = (!symbols.empty() && isIn(c, symbols));
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
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'A') || (c >= '0' && c <= '9');
}
