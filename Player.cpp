/********************************************
 * *Author: Alex Marsh
 * *Date: June 6, 2015
 * *Description: this is the implementation file
 * 	for the Player class.
 ******************************************/
#include "Room0.hpp"
#include "Room1.hpp"
#include "Room2.hpp"
#include "Rooms.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>


/******************************************
 * 		default Constructor
 **************************************/ 		
Player::Player()
{
  currentRoom = NULL;
} 



/******************************************
 * 		 Constructor
 **************************************/ 		
Player::Player(std::string playerName)
{
 setName(playerName);
} 	


/***************************************
 * 		printBag
 **Description: this function prints the contents
	of the bag vector
 **Parameters: this funciton takes no parameters
	and reutns no values.
********************************************/  		
void Player::printBag()
{
 std::cout<<"*****************"<<std::endl;
 std::cout<<"Bag Contents: "<<std::endl;
 std::cout<<"******************"<<std::endl;

 for(unsigned int index = 0; index< bag.size(); index++)
 {
   std::cout<<(index+1)<<"  "<<bag[index]<<std::endl;
 } 
 std::cout<<"*******************"<<std::endl;
}


/****************************************
 * 		addItem
 **Description: this function adds an item to the 
	bag vector.
 **Parameters: this function takes in a string that holds
	the name of an itme. It returns no values 
**********************************************/ 		
void Player::addItem(std::string item)
{
 if(bag.size()< 15)
 {
    bag.push_back(item);
    std::cout<< item <<" has been put in your bag."<<std::endl;
    std::cout<< bag.size() <<" items in the bag."<<std::endl;
 }

 else
 {
 	std::cout<<"Sorry, your bag is too full."<<std::endl;
 }  
}
