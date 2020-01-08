//
// Decimal.cpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/Decimal/Decimal.cpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 08 Jan 2020, 14:31:59
//

#include "Decimal.hpp"

pwdgen::flags::Decimal::Decimal() : Command("Decimal") {
	addTrigger("d");
	addTrigger("decimal");
	takesAnArgument(false);
}

pwdgen::flags::Decimal::~Decimal() {
}

int pwdgen::flags::Decimal::trigger(std::string const &) {
	return getSuccessCode();
}
