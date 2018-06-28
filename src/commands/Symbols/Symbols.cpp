//
// Symbols.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/Symbols
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 27 09:58:36 2018 Sylvain Chaugny
// Last update Thu Jun 28 18:03:40 2018 Sylvain Chaugny
//

#include			<iostream>
#include			"Symbols.hpp"

pwdgen::Symbols::Symbols() :
  PwdgenCommand(),
  _symbols("#;{}[]()-_<>") {
  setDescription("Allows the strings to have special symbols in it. If the argument is 'auto', the allowed symbols will be '" + _symbols + "'");
  addTrigger('s');
  addTrigger("symbols");
  takesAnArgument(true);
}

int				pwdgen::Symbols::onTrigger(std::string const &arg) {
  std::cout << "symbol = " << arg << std::endl;
  return 0;
}


int				pwdgen::Symbols::onFailure(std::string const &arg) {
  return _failure_code;
}

int				pwdgen::Symbols::onSuccess(std::string const &arg) {
  return _success_code;
}
