//
// Symbols.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/Symbols
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 27 09:58:36 2018 Sylvain Chaugny
// Last update Fri Jun 29 17:14:28 2018 Sylvain Chaugny
//

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
  _symbols = arg;
  return 0;
}


int				pwdgen::Symbols::onFailure(std::string const &) {
  return _failure_code;
}

int				pwdgen::Symbols::onSuccess(std::string const &) {
  return _success_code;
}

std::string const		&pwdgen::Symbols::getSymbols() const {
  return _symbols;
}
