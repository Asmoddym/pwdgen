//
// Help.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/Help
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Mon Jun 25 14:43:17 2018 Sylvain Chaugny
// Last update Mon Jun 25 17:34:02 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_HELP_HPP_
#define				PWDGEN_HELP_HPP_

# include			"commands/PwdgenCommand/PwdgenCommand.hpp"

namespace			pwdgen {
  class				Help : public PwdgenCommand {
  private:
    std::string			_executable_name;

  public:
    Help();
    virtual ~Help() = default;

    int				onTrigger(std::string const &arg) override;
    int				onFailure(std::string const &arg) override;

    void			setExecutableName(std::string const &name);

  private:
    void			displayHelp();
  };
}

#endif				/* !PWDGEN_HELP_HPP_ */
