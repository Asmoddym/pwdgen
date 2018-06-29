//
// Generator.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/Generator
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Wed Jun 13 16:04:27 2018 Sylvain Chaugny
// Last update Fri Jun 29 16:42:50 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_GENERATOR_HPP_
# define			PWDGEN_GENERATOR_HPP_

# include			<vector>
# include			<map>
# include			<string>
# include			"arguments-parser.hpp"

using namespace			arguments_parser;

namespace			pwdgen {
  class				Generator;

  class				Generator {
  private:
    std::string			_executable_name;
    ArgumentsParser		_parser;
    std::map<int, int>		_commands;

  public:
    Generator() = default;
    virtual ~Generator() = default;

    int				process(const int ac, const char **av);
    int				init();
    void			generateStrings();
    int				getRandom();
  };
}

#endif				/* !PWDGEN_GENERATOR_HPP_ */
