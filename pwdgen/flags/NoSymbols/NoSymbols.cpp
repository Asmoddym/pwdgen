//
// NoSymbols.cpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/NoSymbols/NoSymbols.cpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 06 Jan 2020, 11:49:21
//

#include "NoSymbols.hpp"

pwdgen::flags::NoSymbols::NoSymbols() : Command("NoSymbols") {
	addTrigger("ns");
	addTrigger("no-symbols");
	takesAnArgument(false);
}

pwdgen::flags::NoSymbols::~NoSymbols() {
}

int pwdgen::flags::NoSymbols::trigger(std::string const &) {
	return getSuccessCode();
}
