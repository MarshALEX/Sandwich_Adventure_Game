/*********************************
**Author: Alex Marsh
* *Date: June 06, 2015
* * *Description: This is the class specification
* * 	file for class rooms that emulates
* * 	stack like qualities in stack-like fashion.
* * *********************************************/

#ifndef ROOMS_HPP
#define ROOMS_HPP

#include <iostream>
#include <string>
#include "Room0.hpp"
#include "Player.hpp"
class Rooms
{
 public:
  	struct direction
        {
          Room0 *room;
	  direction *north;
          direction *south;
          direction *east;
          direction *west;

          direction(Room0 *room1, direction *north1=NULL,
                    direction *south1=NULL, direction *east1=NULL,
                    direction *west1=NULL)
          {
                room = room1;
                north = north1;
                south = south1;
                east = east1;
                west = west1;
          }
        };
        direction *start;
        direction *temp1;
	Rooms(){start = NULL;}
	~Rooms();
	void addRoom(Room0 *room);
	Room0* remove(); 
	
};
#endif
