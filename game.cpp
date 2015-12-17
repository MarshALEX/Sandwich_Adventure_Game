/****************************************
 * *Author: Alex Marsh
 * *Date: June 6, 2015
 * *Description: this is the main file for the 
 * 	game.
 ****************************************/
#include "Rooms.hpp"
#include "Player.hpp"
#include "Room0.hpp"
#include "Room1.hpp"
#include "Room2.hpp"
#include "Room3.hpp"
#include "Room4.hpp"
#include "Room5.hpp"
#include "Room6.hpp"
#include "Room7.hpp"
#include "Room8.hpp"
#include "Room9.hpp"
#include "Room10.hpp"

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
 
void room1Finished();
void room10Finished();

int main(){
 Rooms room_Obj;

 Room0 *r1 = new Room1 ("Room 1");
 Room0 *r2 = new Room2 ("Room 2"); 
 Room0 *r3 = new Room3 ("Room 3");
 Room0 *r4 = new Room4 ("Room 4");
 Room0 *r5 = new Room5 ("Room 5");
 Room0 *r6 = new Room6 ("Room 6");
 Room0 *r7 = new Room7 ("Room 7");
 Room0 *r8 = new Room8 ("Room 8");
 Room0 *r9 = new Room9 ("Room 9");
 Room0 *r0 = new Room10 ("Room 10");

 room_Obj.addRoom(r1);
 room_Obj.addRoom(r2);
 room_Obj.addRoom(r3);
 room_Obj.addRoom(r4);
 room_Obj.addRoom(r5);
 room_Obj.addRoom(r6);
 room_Obj.addRoom(r7);
 room_Obj.addRoom(r8);
 room_Obj.addRoom(r9);
 room_Obj.addRoom(r0);

 std::string token; 
 Player player1("Alex");
 int challengeAccept; 
 char choiceContinue;

 std::cout<<"*****************************************************"<<std::endl;
 std::cout<<"         WELCOME TO YOUR SANDWICH ADVENTURE!"<<std::endl;
 std::cout<<"******************************************************"<<std::endl;
 std::cout<<"Let me explain our situation..."<<std::endl; 
 std::cout<<"There is a large hungry monster called Alex-zilla."<<std::endl;
 std::cout<<"She LOVES sandwiches and is very angry when we don't"<<std::endl;
 std::cout<<"deliver one to her."<<std::endl;
 std::cout<<std::endl;
 std::cout<<"Unfortunately, today we don't have the ingredients for her sandwich yet."<<std::endl;
 std::cout<<"Alex-zilla has hidden the ingredients throughout 10 levels."<<std::endl;
 std::cout<<"Alex-zilla won't release the ingredients unless we answer her"<<std::endl;
 std::cout<<"riddles or we win her games in each of the 10 levels."<<std::endl;
 std::cout<<std::endl;  
 std::cout<<"Please help us collect the ingredients and save the day!"<<std::endl;  
 std::cout<<std::endl;
 std::cout<<"1.) Sure! I'll help you!"<<std::endl;
 std::cout<<"2.) No way! Alex-zilla is way too scary!"<<std::endl;
 std::cout<<"*****************************************************"<<std::endl;
 std::cin>>challengeAccept;

 if(challengeAccept == 2)
 {
 	std::cout<<"That's too bad.  We really could have used your help."<<std::endl;
	std::cout<<"Until next time, goodbye!"<<std::endl;
	return 0; 
 }  
 if(challengeAccept == 1)
 {
  std::cout<<"Wonderful! Let's start your adventure!"<<std::endl;
  std::cout<<"Unfortunately, we don't have much to give you for your quest."<<std::endl;
  std::cout<<"We don't have a sword or a gun..."<<std::endl;
  std::cout<<"we just have a bag."<<std::endl;
  std::cout<<"I know...I know...it's not a lot, but it is all we have."<<std::endl;
  std::cout<<"But at least it's something to keep the sandwich supplies in."<<std::endl;
  std::cout<<"It is a magic bag to keep all of the sandwich supplies fresh."<<std::endl;
  std::cout<<"But here is a warning... you can only have 15 things in"<<std::endl;
  std::cout<<"your bag at one time."<<std::endl;
  std::cout<<std::endl;
  std::cout<<"Ok, so get going!!!"<<std::endl;
  std::cout<<"Alex-zilla is getting angrier by the minute!"<<std::endl;
  std::cout<<std::endl;  
  std::cout<<"First you need to collect her majesties sandwich order."<<std::endl;
  std::cout<<std::endl;
  std::cout<<"*******************************************************"<<std::endl;
  
  for(int x = 0; x < 10; x++)
   { 
     Room0 *here1 = room_Obj.remove();
  std::cout<<"*******************************************************"<<std::endl;
     std::cout<<"X is "<<x<<std::endl;
     std::cout<<"You are now entering "<< here1-> getRoomName()<<std::endl;
     player1.setCurrentRoom(here1);
     token = here1->activity();
     player1.addItem(token);
     player1.printBag();
     if(x == 0)
     {
   	room1Finished(); 
     }			
     if(x == 9)
     {
 	room10Finished();
     }    

    do{
    std::cout<<std::endl;
    std::cout<<"Are you ready for the next level?(Y/N)"<<std::endl;
    std::cin>> choiceContinue;	 	
    
     if(choiceContinue == 'x' || choiceContinue == 'X')
     {
	std::cout<<"Quitting Game Now.  Goodbye."<<std::endl;
	return 0;
     } 

    else if(choiceContinue != 'y' && choiceContinue != 'Y')
     { 
     std::cout<<"Ok, you are scared. I get it."<<std::endl;
     std::cout<<"Whenever you are ready, go ahead and let me know."<<std::endl;
     std::cout<<"Or you can enter 'X' to exit the game."<<std::endl;
     }		
     else
     {
	std::cout<<"Great! Let's move on to the next level."<<std::endl;
     }	
    		 
    }while(choiceContinue != 'y' && choiceContinue != 'Y'); 	 
  }
 }
 player1.printBag();

 r1 = NULL;
 r2 = NULL;
 r3 = NULL;
 r4 = NULL; 
 r5 = NULL;
 r6 = NULL;
 r7 = NULL;
 r8 = NULL;
 r9 = NULL;
 r0 = NULL;
 return 0;
}

/************************************************
 * 		room1Finished
 **Description: this function congratulates the user
	for completeing the first level and produces the user
	with the sandwich order
 **Parameters: this function takes no parameters and returns no values
***********************************************************/
void room1Finished()
{
 int choiceOpen;
 
	std::cout<<std::endl;
	std::cout<<"Oh thank goodness!!!"<<std::endl;
	std::cout<<"You have Alex-zilla's order!"<<std::endl;
	std::cout<<"Open it up and read it already!"<<std::endl;
	do{
	std::cout<<std::endl;
	std::cout<<"1.)Open the order"<<std::endl;
	std::cout<<"2.)Don't open the order."<<std::endl;  
        std::cin>>choiceOpen;
 	 if(choiceOpen == 2)
	 {
	  std::cout<<"AHHH! Open the order already!"<<std::endl;
	  std::cout<<"Alex-zilla waits for no one!"<<std::endl; 
	  std::cout<<std::endl;
	 } 
	}while(choiceOpen != 1);
	std::cout<<"################################"<<std::endl;
	std::cout<<"	   Alex-zilla's Order       "<<std::endl;
	std::cout<<"1 SANDWICH:                     "<<std::endl;
	std::cout<<"-2 slices of bread              "<<std::endl;
	std::cout<<"-Lettuce"<<std::endl;
	std::cout<<"-Tomato"<<std::endl;
	std::cout<<"-Turkey"<<std::endl;
	std::cout<<"-Mayo"<<std::endl;
	std::cout<<"-Mustard"<<std::endl;
	std::cout<<"-Cheese"<<std::endl;
	std::cout<<"-Salt"<<std::endl;
	std::cout<<"-Pepper"<<std::endl;
	std::cout<<"###############################"<<std::endl;
	std::cout<<std::endl;
	std::cout<<std::endl;
	std::cout<<"Now that we know what we are looking for..."<<std::endl;
	std::cout<<"Let's get started!"<<std::endl;
	

}

/**********************************************************
 * 		room10Finish
 **Description: this function congratulates the user on finishing
	the game. It also ends the game
 **Parameters: this function has no parameteres and dooes not 
	return any value
***********************************************************/
void room10Finished()
{
 std::cout<<"########################################################"<<std::endl;
 std::cout<<"########################################################"<<std::endl;
 std::cout<<"	    	   CONGRATULATIONS! YOU HAVE WON!       "<<std::endl;
 std::cout<<"########################################################"<<std::endl;
 std::cout<<"########################################################"<<std::endl;
 std::cout<<"You have collected all of the sandwich items and with "<<std::endl;
 std::cout<<"the golden key we can deliver the sandwich to Alex-zilla"<<std::endl;
 std::cout<<"She will be very pleased."<<std::endl;
 std::cout<<"Thank you for your help! "<<std::endl;
 std::cout<<"Until next time...Goodbye."<<std::endl;  
 exit(1);
}			
