/****************************************
 * **Author: Alexandria Marsh
 * **Date: February 15, 2015
 * **Description: This is the implementation file
 *       for the Car class.  This program will prompt
 *       the user to enter the year and make of a car.
 *       The user will then be presented with the choice of
 *       accelerating the car, braking the car, or exiting
 *       the program. The car will have a maximum speed of
 *       80 and a minimum speed of 0. 
 ***********************************/

#include<iostream>
#include<string>
#include "Car.hpp"
#include <stdlib.h>

Car::Car()
{
  setYear(0);
  setMake("  ");
  setSpeed(0);
}

Car::Car(int yearIn, std::string makeIn, int speedIn) 
{
  setYear(yearIn);
  setMake(makeIn);
  setSpeed(0);
}

void Car::setYear(int yearIn)
{
  year = yearIn;
}

void Car::setMake(std::string makeIn)
{
  make = makeIn;
}

void Car::setSpeed(int speedIn)
{
  speed = speedIn;
}

int Car::getYear()
{
  return year;
}

std::string Car::getMake()
{
  return make;
}

int Car::getSpeed()
{
  return speed;
}

/**********************************
 * 		accelerate
 * **Author: Alexandria Marsh
 * **Date: February 15 2015
 * **Description: This function takes the speed
 *    and adds 10 as long as the speed is not equal
 *    to or greater than 80
 * **Parameters: This function takes the variable speed
 *   in as a parameter then returns the speed    
 ********************************/

int Car::accelerate()
{
  if(speed < 20)
   {
	Car::setSpeed(speed + 10);
       
        return speed; 
   }
  else
   {
     std::cout<<"TOO FAST!"<<std::endl;
     std::cout<<"Alex-zilla is NOT pleased."<<std::endl;
     std::cout<<"She will eat you now."<<std::endl;
     std::cout<<"Game Over"<<std::endl;
     exit(1);	
   }
  
}

/************************************
 * 		brake
 * **Author: Alexandria Marsh
 * **Date: February 15 2015
 * **Description: This function takes the speed and 
 *    subtracts 10 as long as the speed is greater than 0
 * **Parameters: This function takes the variable speed in 
 *   as a parameter then returns the speed.    
************************************/

int Car::brake()
{
  if(speed > 0)
   {
	Car::setSpeed(speed - 10);
  
        return speed;
   }
  else
   {
     std::cout<<"You have stopped." <<std::endl;
     std::cout<<"Alex-zilla is NOT pleased."<<std::endl;
     std::cout<<"She will eat you now."<<std::endl;
     std::cout<<"Game Over"<<std::endl;
     exit(1);	
   }
}

