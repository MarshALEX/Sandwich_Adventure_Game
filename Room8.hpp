/****************************************** 
 **Author: Alex Marsh
 **Date: June 6, 2015
 **Description: This is the specification
 *      file for the Room8 class.  It is
 **     a subclass of the abstract base class
 **     Room0   
 **********************************************/

#ifndef ROOM8_HPP
#define ROOM8_HPP

#include "Room0.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "TicTacToe.hpp"
#include <iostream>
#include <string>

//class Room0;

class Room8 : public Room0
{
 public:
        Room8(std::string name1);
        virtual std::string activity();
};
#endif

