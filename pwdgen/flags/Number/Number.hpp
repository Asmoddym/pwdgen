//
// Number.hpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/Number/Number.hpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 06 Jan 2020, 11:48:13
//

#ifndef PWDGEN_PWDGEN_FLAGS_NUMBER_HPP_
# define PWDGEN_PWDGEN_FLAGS_NUMBER_HPP_

# include "pwdgen/arguments-parser/arguments-parser.hpp"

namespace pwdgen {
	namespace flags {
		class Number : public arguments_parser::Command {
		private:
			int _nb;

		public:
			Number();
			virtual ~Number();

			virtual int trigger(std::string const &) override;
			int get() const;
		};
	}
}

#endif /* !PWDGEN_PWDGEN_FLAGS_NUMBER_HPP_ */
