/***********************************
 * **Author: Alexandria Marsh	
 * **Date: February 7, 2015
 * **Description: This file is the implementation of the
 * 	Hero class.  This program creates a character with 
 * 	values of strength, hit points, speed, and money.  The
 * 	program asks the users for the values then has the user 
 * 	enter hit points which causes damage to the character.
 * 	When the character can no long take any more damage and its
 * 	hit points are zero, the character dies and the game is over.
 * ************************************/

#include<iostream>
#include "Hero.hpp"

Hero::Hero()
 {
   setStrength(1);
   setHitPoints(1);
   setSpeed(1);
   setMoney(1);		
 }	

Hero::Hero(int strengthIn, int hitPointsIn,int speedIn, int moneyIn)
 {
	setStrength(strengthIn);
	setHitPoints(hitPointsIn);
	setSpeed(speedIn);
	setMoney(moneyIn);
 }

void Hero::setStrength(int strengthIn)
 {
  strength = strengthIn;	
 }

int Hero::getStrength(int)
 {
  return strength;
 }

void Hero::setHitPoints(int hitPointsIn)
 {
  hitPoints = hitPointsIn;
 } 

int Hero::getHitPoints(int)
 {
  return hitPoints;	
 }

void Hero::setSpeed(int speedIn)
 {
  speed = speedIn;
 }

int Hero::getSpeed(int)
 {
  return speed;
 }

void Hero::setMoney(int moneyIn)
 {
  money = moneyIn;
 }

int Hero::getMoney(int)
 {
  return money;
 }

/***************************************
 * **Author: Alexandria Marsh
 * **Date: February 7 2015
 * **Description: This function takes the users damage
 *    and subtracts it from the characters hit points. Then if there
 *    are still hit points the character is still alive.  If the hit 
 *    points are zero, the character is dead.
 * **Parameters: The function uses the integer damage and subtracts it
 *    from the characters hit points.  The function returns true if the
 *     character is still alive and has hit points. The function returns
 *     false if there are no more hitpoints and the character has died.
 **************************************/


bool Hero::takeDamage(int damage)
 {
    hitPoints = hitPoints - damage;
    
    if (hitPoints >= 1)
	{
	  return true;
	}
    else 
	{
	  return false;
	}		    
 }           


