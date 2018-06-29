//
// StringsNumber.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/StringsNumber
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 27 09:58:36 2018 Sylvain Chaugny
// Last update Fri Jun 29 17:15:23 2018 Sylvain Chaugny
//

#include			"commands/commands.hpp"
#include			"StringsNumber.hpp"

pwdgen::StringsNumber::StringsNumber() :
  PwdgenCommand() {
  setDescription("Sets the number of generated strings (" + std::to_string(_number) + " by default). Takes a number as argument.");
  addTrigger("strings-number");
  addTrigger('n');
  takesAnArgument(true);
}

int				pwdgen::StringsNumber::onTrigger(std::string const &arg) {
  if (!ArgumentCondition::isNumeric(arg)) {
    return _failure_code;
  }
  _number = stoi(arg);
  return 0;
}


int				pwdgen::StringsNumber::onFailure(std::string const &) {
  return _failure_code;
}

int				pwdgen::StringsNumber::onSuccess(std::string const &) {
  return _success_code;
}

int				pwdgen::StringsNumber::getNumber() {
  return _number;
}
