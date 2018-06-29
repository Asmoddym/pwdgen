//
// ArgumentCondition.cpp for pwdgen in /home/sylvain/Documents/projets/perso/pwdgen/src/commands/utl/ArgumentCondition
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Fri Jun 29 14:08:27 2018 Sylvain Chaugny
// Last update Fri Jun 29 16:54:16 2018 Sylvain Chaugny
//

#include			"ArgumentCondition.hpp"

bool				pwdgen::ArgumentCondition::isNumeric(std::string const &str) {
  for (auto &&c: str) {
    if (c < '0' || c > '9') {
      return false;
    }
  }
  return true;
}

bool				pwdgen::ArgumentCondition::isIn(int c, std::string const &str) {
  for (auto &&i: str) {
    if (c == i) {
      return true;
    }
  }
  return false;
}

bool				pwdgen::ArgumentCondition::isAlphaNumeric(int c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'A') || (c >= '0' && c <= '9');
}
