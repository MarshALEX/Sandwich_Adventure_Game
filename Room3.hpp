/****************************************** 
 **Author: Alex Marsh
 **Date: June 6, 2015
 **Description: This is the specification
 *      file for the Room2 class.  It is
 **     a subclass of the abstract base class
 **     Room0   
 **********************************************/

#ifndef ROOM3_HPP
#define ROOM3_HPP

#include "Room0.hpp"
#include "Player.hpp"
#include "DiceCup.hpp"
#include <iostream>
#include <string>

//class Room0;

class Room3 : public Room0
{
 public:
        Room3(std::string name1);
        virtual std::string activity();
};
#endif

