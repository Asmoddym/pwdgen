//
// Alphabetical.cpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/Alphabetical/Alphabetical.cpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 08 Jan 2020, 14:33:27
//

#include "Alphabetical.hpp"

pwdgen::flags::Alphabetical::Alphabetical() : Command("Alphabetical") {
	addTrigger("a");
	addTrigger("alphabetical");
	takesAnArgument(false);
}

pwdgen::flags::Alphabetical::~Alphabetical() {
}

int pwdgen::flags::Alphabetical::trigger(std::string const &) {
	return getSuccessCode();
}
