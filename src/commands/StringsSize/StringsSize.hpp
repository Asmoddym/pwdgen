//
// StringsSize.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/StringsSize
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 27 09:57:08 2018 Sylvain Chaugny
// Last update Fri Jun 29 16:38:56 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_STRINGSSIZE_HPP_
#define				PWDGEN_STRINGSSIZE_HPP_

# include			"commands/PwdgenCommand/PwdgenCommand.hpp"

namespace			pwdgen {
  class				StringsSize : public PwdgenCommand {
  private:
    int				_size = 10;

  public:
    StringsSize();
    virtual ~StringsSize() = default;

    int				onTrigger(std::string const &arg) override;
    int				onFailure(std::string const &arg) override;
    int				onSuccess(std::string const &arg) override;

    int				getSize();
  };
}

#endif				/* !PWDGEN_STRINGSSIZE_HPP_ */
