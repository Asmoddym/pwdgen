//
// Number.cpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/Number/Number.cpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 06 Jan 2020, 11:48:42
//

#include "Number.hpp"

pwdgen::flags::Number::Number() : Command("Number"),
	_nb(5) {
	addTrigger("n");
	takesAnArgument(true);
}

pwdgen::flags::Number::~Number() {
}

int pwdgen::flags::Number::trigger(std::string const &s) {
	_nb = std::stoi(s);
	return _nb <= 0 ? getFailureCode() : getSuccessCode();
}

int pwdgen::flags::Number::get() const {
	return _nb;
}
