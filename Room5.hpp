/****************************************** 
 **Author: Alex Marsh
 **Date: June 6, 2015
 **Description: This is the specification
 *      file for the Room5 class.  It is
 **     a subclass of the abstract base class
 **     Room0   
 **********************************************/

#ifndef ROOM5_HPP
#define ROOM5_HPP

#include "Room0.hpp"
#include "Player.hpp"
#include "DiceCup.hpp"
#include <iostream>
#include <string>

//class Room0;

class Room5 : public Room0
{
 public:
        Room5(std::string name1);
        virtual std::string activity();
};
#endif

