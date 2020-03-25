//
// Generator.hpp for pwdgen
// File path: /home/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/Generator/Generator.hpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:11
// Last modification at: 25 Mar 2020, 18:08:08
//

#ifndef PWDGEN_PWDGEN_GENERATOR_HPP_
# define PWDGEN_PWDGEN_GENERATOR_HPP_

# include "pwdgen/arguments-parser/arguments-parser.hpp"

namespace pwdgen {
	class Generator {
	private:
		ap::Parser _parser;

	public:
		Generator();
		virtual ~Generator();

		void init();
		int process(int ac, const char **av);

	private:
		void generateStrings();
		int getRandom();

		bool isNumeric(std::string const &s);
		bool isAlphaNumeric(int c);
		bool isIn(int c, std::string const &s);
		bool isAlphabetical(int c);
	};
}

#endif /* !PWDGEN_PWDGEN_GENERATOR_HPP_ */
