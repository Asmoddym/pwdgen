//
// Help.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/Help
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Mon Jun 25 14:43:17 2018 Sylvain Chaugny
// Last update Fri Jun 29 13:04:10 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_HELP_HPP_
#define				PWDGEN_HELP_HPP_

# include			<map>
# include			"commands/PwdgenCommand/PwdgenCommand.hpp"

namespace			pwdgen {
  using				t_descriptions = std::map<std::string, std::string>;

  class				Help : public PwdgenCommand {
  private:
    t_descriptions		_commands_descriptions;
    std::string			_executable_name;

  public:
    Help();
    virtual ~Help() = default;

    int				onTrigger(std::string const &arg) override;
    int				onFailure(std::string const &arg) override;
    int				onSuccess(std::string const &arg) override;

    void			setExecutableName(std::string const &name);
    void		        addCommandHelp(PwdgenCommand &cmd);

  private:
    void			displayHelp();
    std::string			parseTriggers(std::vector<std::string> const &array, bool arg);
    size_t			getSpacePadding();
  };
}

#endif				/* !PWDGEN_HELP_HPP_ */
