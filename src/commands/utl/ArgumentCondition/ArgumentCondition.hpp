//
// ArgumentCondition.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/utl/ArgumentCondition
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Fri Jun 29 14:07:15 2018 Sylvain Chaugny
// Last update Fri Jun 29 16:49:04 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_ARGUMENTCONDITION_HPP_
#define				PWDGEN_ARGUMENTCONDITION_HPP_

# include			<string>

namespace			pwdgen {
  class				ArgumentCondition {
  public:
    static bool			isNumeric(std::string const &arg);
    static bool			isIn(int c, std::string const &arg);
    static bool			isAlphaNumeric(int c);
  };
}
#endif				/* !PWDGEN_ARGUMENTCONDITION_HPP_ */
