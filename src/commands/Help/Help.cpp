//
// Help.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/Help
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Mon Jun 25 14:45:05 2018 Sylvain Chaugny
// Last update Thu Jun 28 18:03:12 2018 Sylvain Chaugny
//

#include			<iostream>
#include			"Help.hpp"

pwdgen::Help::Help() :
  PwdgenCommand("Displays help and exits") {
  addTrigger('h');
  addTrigger("help");
  takesAnArgument(false);
  setFailureCode(1);
  setSuccessCode(0);
}

int				pwdgen::Help::onTrigger(std::string const &arg) {
  displayHelp();
  return 0;
}


int				pwdgen::Help::onFailure(std::string const &arg) {
  displayHelp();
  return _failure_code;
}

int				pwdgen::Help::onSuccess(std::string const &arg) {
  return _success_code;
}

void				pwdgen::Help::setExecutableName(std::string const &name) {
  _executable_name = name;
}

void				pwdgen::Help::displayHelp() {
  size_t			padding;

  padding = getSpacePadding();
  std::cout << "Usage: " << _executable_name << " [ARGS...]" << std::endl;
  std::cout << "Arguments list:" << std::endl;
  std::cout << "padding = " << padding << std::endl;
  for (auto &&desc: _commands_descriptions) {
    std::cout << "  " << desc.first << std::string(padding - desc.first.length() + 1, ' ') << ": " << desc.second << std::endl;
  }
}

void				pwdgen::Help::addCommandHelp(PwdgenCommand const &cmd) {
  _commands_descriptions[parseTriggers(cmd.getTriggers())] = cmd.getDescription();
}

size_t				pwdgen::Help::getSpacePadding() {
  size_t			padding = 0;

  for (auto &&desc: _commands_descriptions) {
    if (desc.first.length() > padding) {
      padding = desc.first.length();
    }
  }
  return padding;
}

std::string			pwdgen::Help::parseTriggers(std::vector<std::string> const &triggers) {
  std::string			str;

  for (size_t i = 0; i < triggers.size(); i++) {
    if (triggers[i].length() == 1) {
      str += "-" + triggers[i] + " [ARG]";
    } else {
      str += "--" + triggers[i] + "=[ARG]";
    }
    if (i + 1 != triggers.size()) {
      str += " | ";
    }
  }
  return str;
}
