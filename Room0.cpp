/************************************** 
 **Author: Alex Marsh
 **Date: Jun 6, 2015
 **Description: This is the implementation
 ** 	file for the base abstract class
 **  	Room0	
 **************************************/

#include "Room0.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

/***********************************
 *  Default Constructor
 * **********************/ 	
Room0:: Room0()
{
 setRoomName("Empty Room");
}


/********************************
 * 		Constructor
 ********************************/ 		
Room0::Room0(std::string name1) 
{
 setRoomName(name1);
}

/********************************
 * 	      readyCheck()
 **Description: this function asks the user
	if they are ready to continue or would
	like to end the game.
**Parameters: this function takes no parameters
	and returns no values 	      	
***************************************/
void Room0::readyCheck()
{
 char choiceContinue;

do{
    std::cout<<std::endl;
    std::cout<<"Are you ready to continue?(Y/N)"<<std::endl;
    std::cin>> choiceContinue;

     if(choiceContinue == 'x' || choiceContinue == 'X')
     {
        std::cout<<"Quitting Game Now.  Goodbye."<<std::endl;
        exit(1);
     }

    else if(choiceContinue != 'y' && choiceContinue != 'Y')
     {
     std::cout<<"Ok, you are scared. I get it."<<std::endl;
     std::cout<<"Whenever you are ready, go ahead and let me know."<<std::endl;
     std::cout<<"Or you can enter 'X' to exit the game."<<std::endl;
     }
     else
     {
        std::cout<<"Great! Let's get going!"<<std::endl;
     }

    }while(choiceContinue != 'y' && choiceContinue != 'Y');

}

/*******************************************
 * 		youFailed
 **Description:this funciton presents the user
	with the option to play the mini game
	again or exit the game entirely.  This 
	will be presented when the user has failed
	the mini game

**Parameter: this function takes in no parameters
	and returns no value
****************************************/ 		
void Room0::youFailed()
{
	 int choiceContinue; 

        std::cout<<"You have failed"
                <<" and Alex-zilla is laughing at you."<<std::endl;
        std::cout<<"What would you like to do?"<<std::endl;
        std::cout<<"1.) Play again"<<std::endl;
        std::cout<<"2.) Quit the Game because I'm a coward."<<std::endl;
        std::cin>> choiceContinue;
        if(choiceContinue == 1)
        {
         std::cout<<"That's the spirit!"<<std::endl;
         std::cout<<"Here we go: "<<std::endl;
        }
        if(choiceContinue == 2)
        {
         std::cout<<"Ok, I understand."<<std::endl;
         std::cout<<"Game Over. Goodbye."<<std::endl;
         exit(1);
        }

}



 
