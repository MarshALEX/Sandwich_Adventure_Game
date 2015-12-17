/********************************************
 * *Author: Alex Marsh
 * *Date: June 6, 2015
 * *Description: this is the specification file for
 * 	the base abstract Room0.
 *****************************************/

#ifndef ROOM0_HPP
#define ROOM0_HPP

#include <iostream>
#include <string>

class Room0
{
	
 public:
	Room0();
	Room0(std::string name1);
 	void setRoomName(std::string name1){roomName = name1;}
	void readyCheck();
	void youFailed();
	std::string getRoomName(){return roomName;}	
	virtual std::string activity() = 0;
 protected:	
	std::string roomName;
	
};
#endif
