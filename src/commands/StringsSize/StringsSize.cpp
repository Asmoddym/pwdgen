//
// StringsSize.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/StringsSize
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 27 09:58:36 2018 Sylvain Chaugny
// Last update Fri Jun 29 17:15:58 2018 Sylvain Chaugny
//

#include			"commands/commands.hpp"
#include			"StringsSize.hpp"

pwdgen::StringsSize::StringsSize() :
  PwdgenCommand() {
  setDescription("Sets the size of the generated strings (" + std::to_string(_size) + " by default). Takes a number as argument.");
  addTrigger("strings-size");
  addTrigger('l');
  takesAnArgument(true);
}

int				pwdgen::StringsSize::onTrigger(std::string const &arg) {
  if (!ArgumentCondition::isNumeric(arg)) {
    return _failure_code;
  }
  _size = stoi(arg);
  return 0;
}


int				pwdgen::StringsSize::onFailure(std::string const &) {
  return _failure_code;
}

int				pwdgen::StringsSize::onSuccess(std::string const &) {
  return _success_code;
}

int				pwdgen::StringsSize::getSize() {
  return _size;
}
