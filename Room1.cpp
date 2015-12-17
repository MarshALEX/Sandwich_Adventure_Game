/******************************************
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 ** 	for the Room1 class.
 *********************************************/

#include "Room0.hpp"
#include "Room1.hpp"
#include "Player.hpp"

#include <iostream>
#include <string>
#include <stdlib.h>

class Room0;
/********************************
 * 		constructor
 ******************************/ 		
Room1::Room1(std::string name1):
	Room0( name1)
{

}
/*********************************
 * 		activity
 * *Description: this function is the task
 * 	the user must complete in order to collect
 * 	an item to add to the vector bag.
 * *Parameters: this function takes in no parameter
 * 	and returns nothing
 *******************************************/ 	
std::string Room1::activity()
{
 std::string prize = "Magic Sandwich Order";
 int choice1;
 int choice2;
 int choice3;
 int choice4;
 int choice5;


 std::cout<<std::endl;
 std::cout<<"Welcome to Level One of Your Sandwich ADventure."<<std::endl;
 std::cout<<"Alex-zilla has been gracious enough to make this 1st level easy."<<std::endl;
 std::cout<<"She is either very generous or she just wants to make sure you"<<std::endl; std::cout<<"get her order..."<<std::endl;  
 std::cout<<std::endl;
 std::cout<<"Here is how to play: "<<std::endl;
 std::cout<<"In this level you are running in a field and Alex-zilla is"<<std::endl;
 std::cout<<"throughing objects at you.  You have to make the correct "<<std::endl;
 std::cout<<"choice to continue."<<std::endl;  	 
 std::cout<<"However, you only get 1 chance. Otherwise Alex-zilla will eat you."<<std::endl;
 std::cout<<"Alex-zilla is generous, but not THAT generous."<<std::endl;
 std::cout<<std::endl;
 readyCheck();
 std::cout<<"Let the game begin!"<<std::endl;
 std::cout<<std::endl;
 
 std::cout<<"You are running in a field...."<<std::endl;
 std::cout<<"OH NO! Alex-zilla has thrown a fireball!"<<std::endl;
 std::cout<<"What do you do?"<<std::endl;
 std::cout<<"1.) Dodge fireball"<<std::endl;
 std::cout<<"2.) Do a Tap Dance"<<std::endl;
 std::cin>> choice1; 
 if(choice1 == 2)
 {
   std::cout<<"Wrong! Alex-zilla will eat you now."<<std::endl;
   std::cout<<"Game Over"<<std::endl;
   exit(1);	  
 }
 if(choice1 == 1)
 {
   std::cout<<std::endl;
   std::cout<<"Good Choice Player!"<<std::endl;
   std::cout<<"You may continue.."<<std::endl;
   std::cout<<std::endl;
 }

 std::cout<<"You are running in a field...."<<std::endl;
 std::cout<<"OH NO! Alex-zilla has presented a pool!"<<std::endl;
 std::cout<<"What do you do?"<<std::endl;
 std::cout<<"1.) Sit by pool and do nothing"<<std::endl;
 std::cout<<"2.) Swim through pool"<<std::endl;
 std::cin>> choice2; 
 if(choice2 == 1)
 {
   std::cout<<"Wrong! Alex-zilla will eat you now."<<std::endl;
   std::cout<<"Game Over"<<std::endl;
   exit(1);	  
 }
 if(choice2 == 2)
 {
   std::cout<<std::endl;
   std::cout<<"Good Choice Player!"<<std::endl;
   std::cout<<"You may continue.."<<std::endl;
   std::cout<<std::endl;
 }

 std::cout<<"You are running in a field...."<<std::endl;
 std::cout<<"OH NO! Alex-zilla requests you sing a song!"<<std::endl;
 std::cout<<"What do you do?"<<std::endl;
 std::cout<<"1.) Sing a beautiful melody"<<std::endl;
 std::cout<<"2.) Clap your hands"<<std::endl;
 std::cin>> choice3; 
 if(choice3 == 2)
 {
   std::cout<<"Wrong! Alex-zilla will eat you now."<<std::endl;
   std::cout<<"Game Over"<<std::endl;
   exit(1);	  
 }
 if(choice3 == 1)
 {
   std::cout<<std::endl;
   std::cout<<"Good Choice Player!"<<std::endl;
   std::cout<<"You may continue.."<<std::endl;
   std::cout<<std::endl;
 }

 std::cout<<"You are running in a field...."<<std::endl;
 std::cout<<"OH NO! Alex-zilla has thrown a crazy monkey your way!"<<std::endl;
 std::cout<<"What do you do?"<<std::endl;
 std::cout<<"1.) Let Monkey beat you up"<<std::endl;
 std::cout<<"2.) Fight Monkey"<<std::endl;
 std::cin>> choice4; 
 if(choice4 == 1)
 {
   std::cout<<"Wrong! Alex-zilla will eat you now."<<std::endl;
   std::cout<<"Game Over"<<std::endl;
   exit(1);	  
 }
 if(choice4 == 2)
 {
   std::cout<<std::endl;
   std::cout<<"Good Choice Player!"<<std::endl;
   std::cout<<"You may continue.."<<std::endl;
   std::cout<<std::endl;
 }

 std::cout<<"You are running in a field...."<<std::endl;
 std::cout<<"OH MY! Alex-zilla has presented a golden rope to the finish!"<<std::endl;
 std::cout<<"What do you do?"<<std::endl;
 std::cout<<"1.) Climb Rope"<<std::endl;
 std::cout<<"2.) Ignore Rope"<<std::endl;
 std::cin>> choice5; 
 if(choice5 == 2)
 {
   std::cout<<"Wrong! Alex-zilla will eat you now."<<std::endl;
   std::cout<<"Game Over"<<std::endl;
   exit(1);	  
 }
 if(choice5 == 1)
 {
   std::cout<<std::endl;
   std::cout<<"Good Choice Player!"<<std::endl;
   std::cout<<"You have won your prize,"<< prize<<"."<<std::endl;
   
   std::cout<<std::endl;
 }

 return prize;
}
