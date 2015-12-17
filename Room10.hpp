/****************************************** 
 **Author: Alex Marsh
 **Date: June 6, 2015
 **Description: This is the specification
 *      file for the Room10 class.  It is
 **     a subclass of the abstract base class
 **     Room0   
 **********************************************/

#ifndef ROOM10_HPP
#define ROOM10_HPP

#include "Room0.hpp"
#include "Player.hpp"
#include "Hero.hpp"
#include <iostream>
#include <string>

//class Room0;

class Room10 : public Room0
{
 public:
        Room10(std::string name1);
        virtual std::string activity();
};
#endif

