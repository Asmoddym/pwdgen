//
// Generator.hpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/Generator/Generator.hpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:11
// Last modification at: 06 Jan 2020, 11:34:35
//

#ifndef PWDGEN_PWDGEN_GENERATOR_HPP_
# define PWDGEN_PWDGEN_GENERATOR_HPP_

# include "pwdgen/arguments-parser/arguments-parser.hpp"

namespace pwdgen {
	class Generator {
	private:
		arguments_parser::ArgumentsParser _parser;

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
	};
}

#endif /* !PWDGEN_PWDGEN_GENERATOR_HPP_ */
