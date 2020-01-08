//
// Hexadecimal.hpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/Hexadecimal/Hexadecimal.hpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 08 Jan 2020, 12:05:32
//

#ifndef PWDGEN_PWDGEN_FLAGS_HEXADECIMAL_HPP_
# define PWDGEN_PWDGEN_FLAGS_HEXADECIMAL_HPP_

# include "pwdgen/arguments-parser/arguments-parser.hpp"

namespace pwdgen {
	namespace flags {
		class Hexadecimal : public arguments_parser::Command {
		public:
			Hexadecimal();
			virtual ~Hexadecimal();

			virtual int trigger(std::string const &) override;
		};
	}
}

#endif /* !PWDGEN_PWDGEN_FLAGS_HEXADECIMAL_HPP_ */
