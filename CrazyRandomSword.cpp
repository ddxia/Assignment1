/*
  File: CrazyRandomSword.cpp
  Author: David Xia <ddx15>

  Created on January 26, 2019
  */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){
  double damage;
  //Code found from stackoverflow
  //https://stackoverflow.com/a/7560564
  std::random_device rand_dev;
  std::mt19937 engine(rand_dev());
  std::uniform_int_distribution<> distr(2, floor(armor/3));
  //End code from stackoverflow
  damage = hitPoints - (armor - distr(eng));
  if(damage < 0){
    return 0;
  }
  return damage;
}
