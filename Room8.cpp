/****************************************** 
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 **     for the Room2 class.
 *********************************************/

#include "Room0.hpp"
#include "Room8.hpp"
#include "Board.hpp"
#include "TicTacToe.hpp"
#include <iostream>
#include <string>

class Room0;
/********************************
 *              constructor
 *******************************/
Room8::Room8(std::string name1):
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

std::string Room8::activity()
{
 std::string prize = "Sprinkle of Salt and Pepper";
 char firstPlayer = 'x'; 

 std::cout<<"Welcome to Level Eight of Your Sandwich Adventure"<<std::endl;
 std::cout<<std::endl;
 std::cout<<"In this level all you have to do is play Tic Tac Toe"
	  <<" by yourself."<<std::endl;
 std::cout<<"That's it.  You just have to finish a game."<<std::endl;
// std::cout<<"The problem is that Alex-zilla likes it when the game is rigged"<<std::endl;
// std::cout<<"and she wants 'X' to win."<<std::endl;
 std::cout<<"So play the game so we can "
	  <<"get our sandwich items!"<<std::endl;
 std::cout<<"Be careful, you only have 1 chance!"<<std::endl; 
 std::cout<<"Just a heads up..."<<std::endl;
 std::cout<<"-the board key and actual board will display each turn."<<std::endl;
 std::cout<<"-remember to enter the coordinates of each move"<<std::endl;
 std::cout<<"   with the row# a space then column#."<<std::endl;
 std::cout<<"   For example: 2 2 "<<std::endl;
 std::cout<<std::endl;

 readyCheck(); 

  std::cout<<"Let's Play TicTacToe!"<<std::endl;
  std::cout<<"X will go first."<<std::endl;

  TicTacToe tic( firstPlayer);
  tic.play(firstPlayer);

 std::cout<<"Congratulations! You have collected "
	  <<prize<<" for the sandwich!"<<std::endl;
 return prize;
}

