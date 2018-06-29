//
// NoSymbols.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/NoSymbols
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 27 09:57:08 2018 Sylvain Chaugny
// Last update Fri Jun 29 16:51:29 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_NOSYMBOLS_HPP_
#define				PWDGEN_NOSYMBOLS_HPP_

# include			"commands/PwdgenCommand/PwdgenCommand.hpp"

namespace			pwdgen {
  class				NoSymbols : public PwdgenCommand {
  private:
    bool			_enabled = false;

  public:
    NoSymbols();
    virtual ~NoSymbols() = default;

    int				onTrigger(std::string const &arg) override;
    int				onFailure(std::string const &arg) override;
    int				onSuccess(std::string const &arg) override;
  };
}

#endif				/* !PWDGEN_NOSYMBOLS_HPP_ */
