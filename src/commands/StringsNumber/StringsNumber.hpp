//
// StringsNumber.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/StringsNumber
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 27 09:57:08 2018 Sylvain Chaugny
// Last update Fri Jun 29 16:32:53 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_STRINGSNUMBER_HPP_
#define				PWDGEN_STRINGSNUMBER_HPP_

# include			"commands/PwdgenCommand/PwdgenCommand.hpp"

namespace			pwdgen {
  class				StringsNumber : public PwdgenCommand {
  private:
    int				_number = 10;

  public:
    StringsNumber();
    virtual ~StringsNumber() = default;

    int				onTrigger(std::string const &arg) override;
    int				onFailure(std::string const &arg) override;
    int				onSuccess(std::string const &arg) override;

    int				getNumber();
  };
}

#endif				/* !PWDGEN_STRINGSNUMBER_HPP_ */
