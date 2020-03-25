//
// Decimal.hpp for pwdgen
// File path: /home/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/Decimal/Decimal.hpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 25 Mar 2020, 18:07:51
//

#ifndef PWDGEN_PWDGEN_FLAGS_DECIMAL_HPP_
# define PWDGEN_PWDGEN_FLAGS_DECIMAL_HPP_

# include "pwdgen/arguments-parser/arguments-parser.hpp"

namespace pwdgen {
	namespace flags {
		class Decimal : public ap::Command {
		public:
			Decimal();
			virtual ~Decimal();

			virtual int trigger(std::string const &) override;
		};
	}
}

#endif /* !PWDGEN_PWDGEN_FLAGS_DECIMAL_HPP_ */
