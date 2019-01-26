/*
  File: AssassinsDagger.h
  Author: David Xia <ddx15>

  Created on January 26, 2019
  */

#include <string>
#include "Weapon.h"

#ifndef ASSASSINSDAGGER_H
#define ASSASSINSDAGGER_H

class AssassinsDagger : public Weapon{
public:
  AssassinsDagger() : Weapon("Assassins Dagger", 10){
  }

  virtual ~AssassinsDagger() {};

  virtual double hit(double armor);
}

#endif
