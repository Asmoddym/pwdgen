//
// main.cpp for pwfgen in /home/sylvain/Documents/projets/perso/pwdgen
//
// Made by Sylvain Chaugny
// Login   <sylvain.chaugny@epitech.eu>
//
// Started on  Fri Apr 13 14:23:44 2018 Sylvain Chaugny
//

#include		"Generator/Generator.hpp"

int			main(const int ac, const char **av) {
  pwdgen::Generator	gen;

  gen.init();
  return gen.process(ac, av);
}
