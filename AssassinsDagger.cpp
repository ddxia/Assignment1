/*
  File: AssassinsDagger.cpp
  Author: David Xia <ddx15>

  Created on January 26, 2019
  */


#include "AssassinsDagger.h"

double AssassinsDagger::hit(double armor){
  double damage;
  if(armor = 0){
    damage = hitPoints * 50;
  }
  else{
    damage = hitpoints - armor;
  }

  if(damage < 0){
    return 0;
  }
  return damage;
}
