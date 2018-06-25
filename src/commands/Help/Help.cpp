//
// Help.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/Help
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Mon Jun 25 14:45:05 2018 Sylvain Chaugny
// Last update Mon Jun 25 17:58:32 2018 Sylvain Chaugny
//

#include			"Help.hpp"
#include			<iostream>

pwdgen::Help::Help() :
  PwdgenCommand("Displays help and exits") {
  addTrigger('h');
  addTrigger("help");
  enableArgument(false);
  setFailureCode(1);
}

int				pwdgen::Help::onTrigger(std::string const &arg) {
  displayHelp();
  return 0;
}


int				pwdgen::Help::onFailure(std::string const &arg) {
  displayHelp();
  return _failure_code;
}

void				pwdgen::Help::setExecutableName(std::string const &name) {
  _executable_name = name;
}

void				pwdgen::Help::displayHelp() {
  std::cout << "Usage: " << _executable_name << " [ARGS...]" << std::endl;
  std::cout << "Arguments list:" << std::endl;
}
