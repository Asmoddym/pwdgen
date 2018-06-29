//
// NoSymbols.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/NoSymbols
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 27 09:58:36 2018 Sylvain Chaugny
// Last update Fri Jun 29 17:14:45 2018 Sylvain Chaugny
//

#include			"NoSymbols.hpp"

pwdgen::NoSymbols::NoSymbols() :
  PwdgenCommand("Disables the special symbols") {
  addTrigger("no-symbols");
  takesAnArgument(false);
}

int				pwdgen::NoSymbols::onTrigger(std::string const &) {
  _enabled = true;
  return 0;
}

int				pwdgen::NoSymbols::onFailure(std::string const &) {
  return _failure_code;
}

int				pwdgen::NoSymbols::onSuccess(std::string const &) {
  return _success_code;
}
