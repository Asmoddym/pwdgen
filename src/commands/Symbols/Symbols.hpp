//
// Symbols.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/Symbols
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 27 09:57:08 2018 Sylvain Chaugny
// Last update Fri Jun 29 16:52:36 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_SYMBOLS_HPP_
#define				PWDGEN_SYMBOLS_HPP_

# include			"commands/PwdgenCommand/PwdgenCommand.hpp"

namespace			pwdgen {
  class				Symbols : public PwdgenCommand {
  private:
    std::string			_symbols;

  public:
    Symbols();
    virtual ~Symbols() = default;

    int				onTrigger(std::string const &arg) override;
    int				onFailure(std::string const &arg) override;
    int				onSuccess(std::string const &arg) override;

    std::string const		&getSymbols() const;
  };
}

#endif				/* !PWDGEN_SYMBOLS_HPP_ */
