//
// main.cpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/main.cpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:33:25
// Last modification at: 06 Jan 2020, 11:33:25
//

#include "pwdgen/pwdgen/Generator/Generator.hpp"

int main(int ac, const char **av) {
	pwdgen::Generator g;

	g.init();
	return g.process(ac, av);
}
