//
// Alphabetical.hpp for pwdgen
// File path: /home/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/Alphabetical/Alphabetical.hpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 25 Mar 2020, 18:07:51
//

#ifndef PWDGEN_PWDGEN_FLAGS_ALPHABETICAL_HPP_
# define PWDGEN_PWDGEN_FLAGS_ALPHABETICAL_HPP_

# include "pwdgen/arguments-parser/arguments-parser.hpp"

namespace pwdgen {
	namespace flags {
		class Alphabetical : public ap::Command {
		public:
			Alphabetical();
			virtual ~Alphabetical();

			virtual int trigger(std::string const &) override;
		};
	}
}

#endif /* !PWDGEN_PWDGEN_FLAGS_ALPHABETICAL_HPP_ */
