//
// e_command.hpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/utl/enum
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Mon Jun 25 17:53:49 2018 Sylvain Chaugny
// Last update Fri Jun 29 16:44:12 2018 Sylvain Chaugny
//

#ifndef				PWDGEN_E_COMMAND_HPP_
#define				PWDGEN_E_COMMAND_HPP_

namespace			pwdgen {
  enum				e_command {
    NONE			= 0,
    DEFAULT			= 1,
    HELP,
    SYMBOLS,
    NO_SYMBOLS,
    STRINGS_NUMBER,
    STRINGS_SIZE,
    COMMANDS
  };
}

#endif				/* !PWDGEN_E_COMMAND_HPP_ */
