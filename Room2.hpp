/****************************************** 
 **Author: Alex Marsh
 **Date: June 6, 2015
 **Description: This is the specification
 *      file for the Room2 class.  It is
 **     a subclass of the abstract base class
 **     Room0   
 **********************************************/

#ifndef ROOM2_HPP
#define ROOM2_HPP

#include "Room0.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>

//class Room0;

class Room2 : public Room0
{
 public:
        Room2(std::string name1);
        virtual std::string activity();
};
#endif

