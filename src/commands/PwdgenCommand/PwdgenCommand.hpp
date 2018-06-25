//
// PwdgenCommand.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/PwdgenCommand
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Mon Jun 25 17:26:35 2018 Sylvain Chaugny
// Last update Mon Jun 25 17:28:19 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_PWDGENCOMMAND_HPP_
#define				PWDGEN_PWDGENCOMMAND_HPP_

# include			"arguments-parser.hpp"

namespace			pwdgen {
  class				PwdgenCommand : public arguments_parser::Command {
  private:
    std::string			_description;

  public:
    PwdgenCommand(std::string const &desc = "");
    virtual ~PwdgenCommand() = default;

    void			setDescription(std::string const &desc);
  };
}

#endif				/* !PWDGEN_PWDGENCOMMAND_HPP_ */