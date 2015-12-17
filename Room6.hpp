/****************************************** 
 **Author: Alex Marsh
 **Date: June 6, 2015
 **Description: This is the specification
 *      file for the Room6 class.  It is
 **     a subclass of the abstract base class
 **     Room0   
 **********************************************/

#ifndef ROOM6_HPP
#define ROOM6_HPP

#include "Room0.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>

//class Room0;

class Room6 : public Room0
{
 public:
        Room6(std::string name1);
        virtual std::string activity();
	bool checkPal(std::string str);
};
#endif

