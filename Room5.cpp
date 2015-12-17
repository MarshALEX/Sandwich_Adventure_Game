/****************************************** 
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 **     for the Room5 class.
 *********************************************/

#include "Room0.hpp"
#include "Room5.hpp"
#include "DiceCup.hpp"

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

/********************************
 *              constructor
 *******************************/
Room5::Room5(std::string name1):
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

std::string Room5::activity()
{
 std::string prize = "Turkey Slices";
 int dicenum = 1;
 int facenum = 6;  
 int count = 1;
 bool flag = false;
 unsigned seed;


 std::cout<<"************************************************"<<std::endl;
 std::cout<<"Welcome to Level Five of Your Sandwich Adventure."<<std::endl;
 std::cout<<std::endl;
 std::cout<<"In this level you will battle chance."<<std::endl;
 std::cout<<"In order to gain your prize and continue your journey"<<std::endl;
 std::cout<<"you must roll the dice and get a six."<<std::endl;
 std::cout<<"But be careful, you only have 15 chances."<<std::endl;
 
 readyCheck();

 DiceCup cupp = DiceCup(dicenum, facenum);
 do{
  std::cout<<std::endl;
  std::cout<<"Rolling..."<<std::endl;
  std::cout<<std::endl;
  
  std::srand(seed);
  seed = time(0);
  int sum1 = cupp.rollDice();
  std::cout<<"Your number is: "<<sum1<<std::endl;

  if(sum1 == 6)
  {
	std::cout<<std::endl;
	std::cout<<"You have won!"<<std::endl;
	flag = true;
  }
  else
  {
	count++;
	if(count > 15)
	{
	 std::cout<<"Sorry, you had 15 chances."<<std::endl;
	 std::cout<<"Alex-zilla will eat you now."<<std::endl;
	 std::cout<<"Game Over"<<std::endl;
	 exit(1);
	} 
	youFailed();
  }
 }while(flag == false);

 std::cout<<std::endl;
 std::cout<<"Congratulations! You have collected "
	  <<prize<<" for the sandwich!"<<std::endl;
 std::cout<<std::endl;
 return prize;
}

