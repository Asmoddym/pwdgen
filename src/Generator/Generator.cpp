//
// Generator.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/Generator
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 13 16:08:52 2018 Sylvain Chaugny
// Last update Mon Jun 25 17:58:01 2018 Sylvain Chaugny
//

#include			"arguments-parser.hpp"
#include			"commands/commands.hpp"
#include			"Generator.hpp"

int				pwdgen::Generator::init() {
  _commands[e_command::HELP] = _parser.addCommand<Help>();
  return 0;
}

int				pwdgen::Generator::process(const int ac, const char **av) {
  _parser.getCommand<Help>(_commands[e_command::HELP]).setExecutableName(av[0]);
  _parser.parse(ac, av, 1);
  return 0;
}

int				pwdgen::Generator::display_help(std::string const &str) {
  return 0;
}