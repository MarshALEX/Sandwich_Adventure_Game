/****************************************** 
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 **     for the Room2 class.
 *********************************************/

#include "Room0.hpp"
#include "Room3.hpp"
#include "DiceCup.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Room0;
/********************************
 *              constructor
 *******************************/
Room3::Room3(std::string name1):
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

std::string Room3::activity()
{
 std::string prize = "Lettuce";
 int dicenum = 2;
 int facenum = 6;
 int rolls = 1;
 unsigned seed;
 int sum1, sum2;
 int choiceContinue;
 bool flag = false;

 std::cout<<"****************************************************"<<std::endl;
 std::cout<<"Welcome to Level Three of Your Sandwich Adventure."<<std::endl;
 std::cout<<std::endl;
 std::cout<<"In this level, you will battle Alex-zilla in a game of dice."<<std::endl;
 std::cout<<"You each have two dice. You will roll them and compare"<<std::endl;
 std::cout<<"the sum of your roll. "<<std::endl;
 std::cout<<"In order to gain your prize and continue your journey"<<std::endl;
 std::cout<<"you must roll the dice and get a higher sum than Alex-zilla."<<std::endl;
 std::cout<<"Good Luck!"<<std::endl; 
 readyCheck(); 

 DiceCup cup = DiceCup(dicenum, facenum);
 do{
 std::cout<<"Rolling..."<<std::endl; 
 for(int i=1; i<=rolls; i++)
 {
	std::srand(seed);
	seed = time(0);
	 sum1 = cup.rollDice();
	std::cout<<"Your sum is: "<<sum1<<std::endl; 
 }

 for(int i=1; i<=rolls; i++)
 {
	std::srand(seed);
	seed = time(0);
	sum2 = cup.rollDice();
	std::cout<<"Alex-zilla's sum is: "<<sum2<<std::endl; 
 }
 std::cout<<std::endl;
 if(sum1 > sum2)
 {
	std::cout<<"You have won!"<<std::endl;
 	flag = true;
 }
 if(sum1 == sum2)
 {
	std::cout<<"It's a tie!"<<std::endl;
	std::cout<<"The gracious Alex-zilla has granted you a win."<<std::endl;
	flag = true;
 }
 if(sum2 > sum1)
 {
	std::cout<<"Alex-zilla has won!"<<std::endl;
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
 
}while(flag == false);
 std::cout<<std::endl;
 std::cout<<"Congratulations! You have collected lettuce for the sandwich!"<<std::endl; 
 std::cout<<std::endl;
 return prize;
}

