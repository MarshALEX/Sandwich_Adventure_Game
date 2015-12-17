/*************************************** 
 **Author: Alex Marsh
 **Date: Jun 6, 2015
 **Description: This is the implementation
 **     file for the class Rooms 
 **************************************/

#include "Rooms.hpp"
#include <iostream>
#include <string>



/***************************************
 * 		addRoom
 *Description:this function adds a new
 * 	element to the end of the list
 *Parameters:this function takes the value
 ** 	of data to be entered as a parameter
 ** 	and does not return any value
 ****************************************/
void Rooms::addRoom(Room0 *room)
{
 direction *newroom;
 newroom = new direction(room);
 temp1 = start;
 if(temp1 == NULL)
 {
        start = newroom;
        newroom->north = NULL;
        newroom->south = NULL;
        return;
 }
 while(temp1->north != NULL)
 {
        temp1 = temp1->north;
 }

 temp1->north = newroom;
 newroom->south = temp1;
 newroom->north = NULL;
}


/*******************************************
 * 		deconstructor
 ***Description: this is the deconstructor which 
 **   	deallocates the memory used by the list
 ***Parameters: there are no parameters
 ***********************************************/
Rooms::~Rooms()
{
 direction *ptr = start;
 while(ptr != NULL)
 {
        direction *garbage = ptr;
        ptr = ptr->north;
        delete garbage;
 }
}

/************************************************	
 * 		remove
 ***Description: this function removes a number from
 ** 	front of the list.  This function does not assume the 
 ** 	list is sorted and thus removes the first number
 ** 	found matching the value from the stack
 ***Parameters: this function takes a double value to find
 ** 	as a parameter and returns a double
 ********************************************************/
Room0* Rooms::remove()
{
 if(start == NULL)
 {
  std::cout<<"Sorry, there are no more rooms."<<std::endl;
   
 }

 else
 {
  
  Room0 *something = NULL;
  something = start->room;
 
  temp1 = start;

  start = start->north;

  //start->prev = NULL;
  
    delete temp1;
    return something;
  } 
  
}
  
