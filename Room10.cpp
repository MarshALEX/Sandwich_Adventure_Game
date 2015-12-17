/****************************************** 
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 **     for the Room10 class.
 *********************************************/

#include "Room0.hpp"
#include "Room10.hpp"
#include "Hero.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>


class Room0;
/********************************
 *              constructor
 *******************************/
Room10::Room10(std::string name1):
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

std::string Room10::activity()
{
 std::string prize = "Golden Key";
 
  int userStrength = 100;
  int  userHitPoints = 100;
  int  userSpeed = 50; 
  int  userMoney = 100;
  int  userDamage;
  int count = 0;

Hero player = Hero(userStrength, userHitPoints, userSpeed, userMoney);
 
 std::cout<<"Welcome to Level Nine of Your Sandwich Adventure"<<std::endl;
 std::cout<<std::endl;
 std::cout<<"You have now collected all of the items to make"<<std::endl;
 std::cout<<"Alex-zilla's sandwich."<<std::endl;
 std::cout<<"All we have to do now is deliver it to her!"<<std::endl;
 std::cout<<"But of course, it is not that easy.  First we have to "<<std::endl;
 std::cout<<"collect the Golden Key to unlock the door to "<<std::endl;
 std::cout<<"Alex-zilla's house. To earn the Golden Key "<<std::endl;
 std::cout<<"You must first slay the dragon! The dragon has"<<std::endl;
 std::cout<<"100 life points. You have 10 chances to kill it. "<<std::endl;
 std::cout<<"This is the last level!"<<std::endl;
 std::cout<<"You can do this!"<<std::endl;

 readyCheck(); 

        std::cout<<"Oh My! There is a dragon!"<<std::endl;
        std::cout<<"You must fight to the death!"<<std::endl;
  	
        do{
	    std::cout<<std::endl;
            std::cout<<"Enter damage to the dragon: "<<std::endl;
            std::cin>> userDamage;
	    std::cout<<std::endl;
            std::cout<<"The Dragons Stats"<<std::endl;
            std::cout<<"Life Points: " 
	    	     <<player.getHitPoints(userHitPoints)- userDamage<<std::endl;
     	    count ++;
	    if(count > 10)
	    {
	       std::cout<<std::endl;
		youFailed();
		count = 0;
	        	
	       std::cout<<std::endl;
	    }	 	
	  }while(player.takeDamage(userDamage));
	
        if(!player.takeDamage(userDamage))
            {
                std::cout<<std::endl;
	        std::cout<<"You have slayed the dragon!"<<std::endl;
	 	std::cout<<"Congratulations! You have collected "<<
			prize<<std::endl;	
		std::cout<<std::endl;
		 return prize;
	    }

}

