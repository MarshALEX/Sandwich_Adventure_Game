/*****************************************
 * **Author: Alexandria Marsh
 * **Date:  February 15, 2015
 * *Description: This is the Car class specification
 *    file to be used in the implemenation file Car.cpp
 *****************************/

#ifndef CAR_HPP
#define CAR_HPP
#include<string>

class Car
 {   //defines the interface of car class
   private:
	int year;
	std::string make;
	int speed;

   public:
	Car();
	Car(int, std::string, int);
	void setYear(int);
	void setMake(std::string);
	void setSpeed(int);
	int getYear();
	std::string getMake();
	int getSpeed();
	int accelerate();
	int brake();
 };
#endif
 
    
