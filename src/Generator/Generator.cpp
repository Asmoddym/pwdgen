//
// Generator.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/Generator
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 13 16:08:52 2018 Sylvain Chaugny
// Last update Fri Jun 29 17:05:30 2018 Sylvain Chaugny
//

#include			<sys/time.h>
#include			"arguments-parser.hpp"
#include			"commands/commands.hpp"
#include			"Generator.hpp"

int				pwdgen::Generator::init() {
  _commands[e_command::HELP] = _parser.addDefaultCommand<Help>();
  _commands[e_command::SYMBOLS] = _parser.addCommand<Symbols>();
  _commands[e_command::NO_SYMBOLS] = _parser.addCommand<NoSymbols>();
  _commands[e_command::STRINGS_NUMBER] = _parser.addCommand<StringsNumber>();
  _commands[e_command::STRINGS_SIZE] = _parser.addCommand<StringsSize>();
  _commands[e_command::DEFAULT] = _commands[e_command::HELP];

  _parser.getDefaultCommand<Help>().addCommandHelp(_parser.getCommand<Help>(_commands[e_command::HELP]));
  _parser.getDefaultCommand<Help>().addCommandHelp(_parser.getCommand<Symbols>(_commands[e_command::SYMBOLS]));
  _parser.getDefaultCommand<Help>().addCommandHelp(_parser.getCommand<NoSymbols>(_commands[e_command::NO_SYMBOLS]));
  _parser.getDefaultCommand<Help>().addCommandHelp(_parser.getCommand<StringsNumber>(_commands[e_command::STRINGS_NUMBER]));
  _parser.getDefaultCommand<Help>().addCommandHelp(_parser.getCommand<StringsSize>(_commands[e_command::STRINGS_SIZE]));
  return 0;
}

int				pwdgen::Generator::process(const int ac, const char **av) {
  _parser.getDefaultCommand<Help>().setExecutableName(av[0]);
  //  _parser.needsAtLeastOneArgument(true);
  if (_parser.parse(ac, av, 1) || _parser.getDefaultCommand().hasBeenTriggered()) {
    return 1;
  }
  generateStrings();
  return 0;
}

void				pwdgen::Generator::generateStrings() {
  struct timeval		time;
  int			        iterations;
  int				size;

  gettimeofday(&time, NULL);
  srand(time.tv_usec);
  iterations = _parser.getCommand<StringsNumber>(_commands[e_command::STRINGS_NUMBER]).getNumber();
  size = _parser.getCommand<StringsSize>(_commands[e_command::STRINGS_SIZE]).getSize();
  for (int i = 0; i < iterations; i++) {
    for (int len = 0; len < size; len++) {
      std::cout << static_cast<char>(getRandom());
    }
    std::cout << std::endl;
  }
}

int				pwdgen::Generator::getRandom() {
  int				c;
  std::string			symbols;
  bool				condition = false;

  if (_parser.getCommand(_commands[e_command::NO_SYMBOLS]).hasBeenTriggered()) {
    symbols = "";
  } else {
    symbols = _parser.getCommand<Symbols>(_commands[e_command::SYMBOLS]).getSymbols();
  }
  while (!condition) {
    c = rand() % 128;
    if (ArgumentCondition::isAlphaNumeric(c)) {
      condition = true;
    } else {
      condition = (!symbols.empty() && ArgumentCondition::isIn(c, symbols));
    }
  }
  return c;
}
