//
// Hexadecimal.cpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/Hexadecimal/Hexadecimal.cpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 08 Jan 2020, 12:05:46
//

#include "Hexadecimal.hpp"

pwdgen::flags::Hexadecimal::Hexadecimal() : Command("Hexadecimal") {
	addTrigger("h");
	addTrigger("hexa");
	takesAnArgument(false);
}

pwdgen::flags::Hexadecimal::~Hexadecimal() {
}

int pwdgen::flags::Hexadecimal::trigger(std::string const &) {
	return getSuccessCode();
}
