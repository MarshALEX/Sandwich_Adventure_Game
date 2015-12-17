/****************************************** 
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 **     for the Room2 class.
 *********************************************/

#include "Room0.hpp"
#include "Room2.hpp"

#include <iostream>
#include <string>
#include <cstdlib> //rand num, exit, and srand
#include <time.h>  //time()
#include <stdlib.h>

class Room0;
/********************************
 *              constructor
 *******************************/
Room2::Room2(std::string name1):
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

std::string Room2::activity()
{
 std::string prize = "One Slice of Bread";
 int num,
     guess,
	x=0 ;	

 std::cout<<std::endl;
 std::cout<<"Welcome to Level Two of Your Sandwich Adventure."<<std::endl;
 std::cout<<std::endl;
 std::cout<<"Alex-zilla has a new test for you."<<std::endl; 	
 std::cout<<"If you want the next item on your list you have"<<std::endl;
 std::cout<<"to play her guessing game."
	   <<" Guess her # between 0 and 100."<<std::endl; 
 std::cout<<"Be careful, you only have 20 guesses!  Good Luck!"<<std::endl;
 std::cout<<std::endl;
	srand(time(NULL));
	num = rand () % 100;
//	std::cout<< "Random number is: "<< num<< std::endl;  
	do{
	//enter guess
 	 std::cout<<std::endl;
	 std::cout<<"Enter your guess 1-100: "<<std::endl;
	  std::cin>> guess;
	
	  if(guess == num)
	   {
 	     std::cout<<"Congratulations! Your guess is right!"<< std::endl;
	   }	
	  else if (guess > num)
	   {
	     std::cout<<"Too high. Try again."<<std::endl;
	   }	
	  else if (guess < num)
	   { 
	     std::cout<<"Too low. Try again."<<std::endl;
	   }
	   x++;
	std::cout<<"Number of guesses: "<<x<<std::endl;
	if(x > 20)
 	{
	  std::cout<<"Sorry, you have made too many guesses."<<std::endl;
	  std::cout<<"Alex-zilla will eat you now."<<std::endl;
	  std::cout<<"Game Over"<<std::endl;
	  exit(1);
	}
	 }while(guess != num);
	
	std::cout<<std::endl;
	  

 return prize;
}

