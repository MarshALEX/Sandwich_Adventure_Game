/**********************************
 * **Author: Alexandria Marsh
 * **Date: February 7, 2015
 * **Description: This file is the Hero class specification
 * 	file for the implementation file Hero.cpp
 * *****************************/

#ifndef HERO_HPP
#define HERO_HPP

class Hero
 {
   private:
	int    strength,
	       hitPoints,
	       speed,
	       money;

   public:
	Hero();
	Hero(int, int, int, int);
	void setStrength(int);
	void setHitPoints(int);
	void setSpeed(int);
	void setMoney(int);
	int getStrength(int);
	int getHitPoints(int);
	int getSpeed(int);
	int getMoney(int);
	bool takeDamage(int);
 };
#endif	
		

 	
