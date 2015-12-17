/****************************************** 
 **Author: Alex Marsh
 **Date: June 6, 2015
 **Description: This is the specification
 *      file for the Room9 class.  It is
 **     a subclass of the abstract base class
 **     Room0   
 **********************************************/

#ifndef ROOM9_HPP
#define ROOM9_HPP

#include "Room0.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>

//class Room0;

class Room9 : public Room0
{
 public:
        Room9(std::string name1);
        virtual std::string activity();
};
#endif

