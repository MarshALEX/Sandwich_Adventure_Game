/***************************************** 
 **Author: Alex Marsh
 **Date: June 6, 2015
 **Description: This is the specification
 * 	file for the Room1 class.  It is
 ** 	a subclass of the abstract base class
 **   	Room0 	
 *********************************************/

#ifndef ROOM1_HPP
#define ROOM1_HPP

#include "Room0.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>

//class Room0;

class Room1 : public Room0
{
 public: 
	Room1(std::string name1);
	virtual std::string activity();
};
#endif

