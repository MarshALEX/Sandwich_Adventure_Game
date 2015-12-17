/**************************************************
 * *Author: Alex Marsh
 * *Date: June 6, 2015
 * *Description: this is the specification file for the 
 * 	Player class
 *************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Room0.hpp"
#include "Rooms.hpp"
#include <iostream>
#include <string>
#include <vector>

class Room0;
class Rooms; 


class Player
{
 protected: 
	std::vector<std::string> bag;
	Room0 *currentRoom;
	std::string playerName;
 public: 
	Player();
	Player(std::string name);
	void setName(std::string n){playerName = n;}
	std::string getName(){return playerName;}
	void setCurrentRoom(Room0 *roomNow){currentRoom = roomNow;}
	void addItem(std::string item);	
        void printBag();
};
#endif 
