//
// PwdgenCommand.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/PwdgenCommand
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Mon Jun 25 17:26:26 2018 Sylvain Chaugny
// Last update Mon Jun 25 17:33:26 2018 Sylvain Chaugny
//

#include			"PwdgenCommand.hpp"

pwdgen::PwdgenCommand::PwdgenCommand(std::string const &desc) :
  _description(desc) {
}

void				pwdgen::PwdgenCommand::setDescription(std::string const &desc) {
  _description = desc;
}