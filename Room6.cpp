/****************************************** 
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 **     for the Room6 class.
 *********************************************/

#include "Room0.hpp"
#include "Room6.hpp"

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

class Room0;
/********************************
 *              constructor
 *******************************/
Room6::Room6(std::string name1):
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

std::string Room6::activity()
{
 std::string prize = "Cheese";
 std::string input;
 Player p;
 bool flag;

 std::cout<<"Welcome to Level Six of Your Sandwich Adventure."<<std::endl; 
 std::cout<<std::endl;
 std::cout<<"In this level you have to please Alex-zilla"<<std::endl;
 std::cout<<"by giving her a palindrome."<<std::endl;
 std::cout<<"(a word the same backwards and forwards)"<<std::endl;
 std::cout<<"It is the only way to collect our supplies."<<std::endl; 
 std::cout<<"Be careful, Alex-zilla is only giving you one chance."<<std::endl;
 std::cout<<std::endl;
 //ask user for word
 std::cout<<"Enter your word: "<<std::endl;
 std::cin>> input;

 
  for(unsigned int i=0; i< input.length(); i++)
  {
	//if the first letter and last letter are
	//the same, the loop moves to second letter
	//and second to last letter, ect. 
  
	if(input.at(i)!=input.at((input.length()-i)-1))
	  {
   	       flag = false;
	  }
	else
	  {
		flag = true;
	  }
   }
  if(flag == false)
   {	 	
     	std::cout<<"Sorry, your word is not a palindrome."<<std::endl;
	std::cout<<"Alex-zilla is not pleased."<<std::endl;
   	std::cout<<"She will eat you now."<<std::endl;
     	std::cout<<"Game Over"<<std::endl;
     	exit(1); 		
   }
   else
   {
        std::cout<<"Your word is a palindrome."<<std::endl;
        std::cout<<"Alex-zilla is pleased."<<std::endl;

	 std::cout<<"Congratulations! You have collected "
	  <<prize<<" for the sandwich!"<<std::endl;
	 return prize;
   }
}

