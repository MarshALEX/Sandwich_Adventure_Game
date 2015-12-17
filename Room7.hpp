/****************************************** 
 **Author: Alex Marsh
 **Date: June 6, 2015
 **Description: This is the specification
 *      file for the Room7 class.  It is
 **     a subclass of the abstract base class
 **     Room0   
 **********************************************/

#ifndef ROOM7_HPP
#define ROOM7_HPP

#include "Room0.hpp"
#include "Car.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>

//class Room0;

class Room7 : public Room0
{
 public:
        Room7(std::string name1);
        virtual std::string activity();
};
#endif

