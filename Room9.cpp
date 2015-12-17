/****************************************** 
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 **     for the Room9 class.
 *********************************************/

#include "Room0.hpp"
#include "Room9.hpp"

#include <iostream>
#include <string>
#include <stdlib.h>

class Room0;
/********************************
 *              constructor
 *******************************/
Room9::Room9(std::string name1):
        Room0(name1)
{

}

/*********************************
 *              activity
 **Description: this function is the task
 *      the user must complete in order to collect
 **      an item to add to the vector bag.
 **Parameters: this function takes in no parameter
 **      and returns nothing
 ********************************************/

std::string Room9::activity()
{
 std::string prize = "One Slice of Bread";
 int choice1;
 int choice2;
 bool flag1 = false;
 bool flag2 = false; 

 std::cout<<"Welcome to Level Nine of Your Sandwich Adventure"<<std::endl;
 std::cout<<std::endl;
 std::cout<<"Alex-zilla has one last quiz for you. "<<std::endl;
 std::cout<<"If you want your last item to complete the sandwich"<<std::endl;
 std::cout<<"you have to answer her question correctly."<<std::endl;
 std::cout<<std::endl;
 std::cout<<"This is a test to see if you remember what"<<std::endl;
 std::cout<<"Alex-zilla wants on her sandwich."<<std::endl;
 std::cout<<std::endl;
 
 readyCheck();
 do{
 std::cout<<"QUESTION 1"<<std::endl;
 std::cout<<"What kind of meat does Alex-zilla want on her sandwich?"<<std::endl;
 std::cout<<"1.) Salami"<<std::endl;
 std::cout<<"2.) Chicken"<<std::endl;
 std::cout<<"3.) Turkey"<<std::endl;
 std::cout<<"4.) Ham"<<std::endl;
 std::cout<<"5.) Pastrami"<<std::endl;
 std::cin>> choice1;
 
 if(choice1 == 3)
 {
   std::cout<<std::endl;
   std::cout<<"Good Choice Player!"<<std::endl;
   std::cout<<"You may continue."<<std::endl;
   std::cout<<std::endl;
   flag1 = true;
 }
 

 else 
 {
   youFailed();
 }
 }while(flag1 == false);


 do{
         std::cout<<"QUESTION 2"<<std::endl;
	 std::cout<<"What kind of sauces does Alex-zilla"<<
		 " want on her sandwich?"<<std::endl;
	 std::cout<<"1.) Sweet Chilli Sauce"<<std::endl;
	 std::cout<<"2.) Teriyaki Sauce"<<std::endl;
	 std::cout<<"3.) Ketchup"<<std::endl;
	 std::cout<<"4.) Mayo"<<std::endl;
	 std::cout<<"5.) Mayo and Mustard"<<std::endl;
	 std::cin>> choice2;
 
   if(choice2 == 5)
   {
   std::cout<<std::endl;
   std::cout<<"Good Choice Player!"<<std::endl;
   std::cout<<std::endl;
   flag2 = true;
   }
   else
   {
	youFailed();
   }
  }while(flag2 == false);

  std::cout<<"Congratulations! You have collected "<<prize
	  <<" for the sandwich."<<std::endl; 
  return prize;

}

