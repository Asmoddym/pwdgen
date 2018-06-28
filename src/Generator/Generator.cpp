//
// Generator.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/Generator
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 13 16:08:52 2018 Sylvain Chaugny
// Last update Thu Jun 28 17:19:24 2018 Sylvain Chaugny
//

#include			"arguments-parser.hpp"
#include			"commands/commands.hpp"
#include			"Generator.hpp"

int				pwdgen::Generator::init() {
  _commands[e_command::HELP] = _parser.addCommand<Help>();
  _commands[e_command::SYMBOLS] = _parser.addCommand<Symbols>();
  _parser.setDefaultCommand(_commands[e_command::HELP]);
  _commands[e_command::DEFAULT] = _commands[e_command::HELP];

  _parser.getDefaultCommand<Help>().addCommandHelp(_parser.getCommand<PwdgenCommand>(_commands[e_command::HELP]));
  _parser.getDefaultCommand<Help>().addCommandHelp(_parser.getCommand<Symbols>(_commands[e_command::SYMBOLS]));
  return 0;
}

int				pwdgen::Generator::process(const int ac, const char **av) {
  _parser.getDefaultCommand<Help>().setExecutableName(av[0]);
  _parser.parse(ac, av, 1);
  return 0;
}

int				pwdgen::Generator::display_help(std::string const &str) {
  return 0;
}
