//
// Length.cpp for pwdgen
// File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/flags/Length/Length.cpp
//
// Author              : Asmoddym
// Created at          : 06 Jan 2020, 11:30:28
// Last modification at: 06 Jan 2020, 11:43:10
//

#include "Length.hpp"

pwdgen::flags::Length::Length() : Command("Length"),
	_nb(16) {
	addTrigger("l");
	takesAnArgument(true);
}

pwdgen::flags::Length::~Length() {
}

int pwdgen::flags::Length::trigger(std::string const &s) {
	_nb = std::stoi(s);
	return _nb <= 8 ? getFailureCode() : getSuccessCode();
}

int pwdgen::flags::Length::get() const {
	return _nb;
}
