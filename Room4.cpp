/****************************************** 
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 **     for the Room4 class.
 *********************************************/

#include "Room0.hpp"
#include "Room4.hpp"

#include <iostream>
#include <string>

class Room0;
/********************************
 *              constructor
 *******************************/
Room4::Room4(std::string name1):
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

std::string Room4::activity()
{
 std::string prize = "Tomato";
 std::string guess;
 bool flag = false;

 std::cout<<std::endl;
 std::cout<<"Welcome to Level Four of Your Sandwich Adventure."<<std::endl;
 std::cout<<std::endl;
 std::cout<<"In order to get your next item on the list, you need to"<<std::endl;
 
 std::cout<<"unscramble this word.  Make sure you spell it correctly."<<std::endl;

 readyCheck();
 do{
 std::cout<<"The word to unscramble is:"<<std::endl;
 std::cout<<"               sindwach  "<<std::endl;
 std::cout<<"HINT: This word is in the games name."<<std::endl;
 std::cout<<"Think about it and then type in your guess."<<std::endl;
 std::cin>> guess;

 if(guess == "sandwich")
 {
	std::cout<<std::endl;
	std::cout<<"That's right! You did it!"<<std::endl;
	flag = true; 
 }
 else
 {
   std::cout<<std::endl;	
   youFailed(); 
   std::cout<<std::endl;
 }

  }while(flag == false);
  std::cout<<std::endl;
  std::cout<<"Congratulations!"<<
           " You have collected "<<prize<<" for the sandwich!"<<std::endl;
 std::cout<<std::endl;

 
 return prize;
}

