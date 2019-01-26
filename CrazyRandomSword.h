/*
  File: CrazyRandomSword.h
  Author: David Xia <ddx15>

  Created on January 26, 2019
  */

#include <string>
#include <random>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
private:
  //Code found from stackoverflow
  //https://stackoverflow.com/a/7560564
  std::random_device rd;
  std::mt19937 eng(rd());
  std::uniform_int_distribution<> distr(7, 100);
  //End code from stackoverflow
public:
  CrazyRandomSword() : Weapon("Crazy Random Sword", distr(eng)){
  }

  virtual ~CrazyRandomSword() {};

  virtual double hit(double armor);
};

#endif
