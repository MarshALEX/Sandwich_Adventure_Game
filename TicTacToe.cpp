/*************************************
 * **author: Alexandria Marsh
 * **Date: February 21, 2015
 * **Description: This i the implementation file for
 *       the class TicTacToe.  The program asks the user
 *       who will play first and then begins the tictactoe
 *       game.  The program keeps track of whose turn it is
 *       and moves they have made.  The progam also outputs the 
 *       board game and the result of the game.
 ************************************/

#include "Board.hpp"
#include "TicTacToe.hpp"
#include<iostream>
#include<iomanip>

//constructor that takes in first player
TicTacToe::TicTacToe(char first)
{
  char whoseTurn = first;
}      

//function that starts the game
/********************************
 *	   play
 * **Description: This function begins the
 *    tictactoe game by getting the users play
 *    and sending ti to the makeMove method. Once
 *    a player has won, the function will print the outcome.
 * **Parameters: The function  takes in the paramter of 
 *    who the first player is and has no returning values. 
 ***************************/    
void TicTacToe::play(char whoseTurn)
{
 Board board1; 
 do {
  int rows;
  int columns;
  int status;
 board1.printKey();
 std::cout<< "Player "<< whoseTurn<<" please enter your move:"<<std::endl;
 std::cin >> rows >> columns; 

 if(! board1.makeMove(rows, columns, whoseTurn))
   {
     std::cout<<"Sorry! That space is taken."<<std::endl; 
     std::cout<<"Please enter another move: "<<std::endl;
     std::cin>> rows >> columns; 
   }
 if(board1.makeMove(rows, columns, whoseTurn))
 {
   board1.printKey();
   board1.print();
 }
 status = board1.gameState();
// if ((board1.gameState()!=0)&&(board1.gameState()!=1)&&(board1.gameState()!=3))
  //  { status = draw;}
 switch(status)
 {
	case xWon: std::cout<<"X has won the game!"<<std::endl;
		    break;	
	case oWon: std::cout<<"O has won the game!"<<std::endl;
		    break;
	case draw: std::cout<<"The game is a draw."<<std::endl;
		    break;
	case progress: std::cout<<"Game in Progress"<<std::endl;
 		    break;
 }  

 board1.print();    

   if(whoseTurn == 'x')
     {
	whoseTurn = 'o';
     }
   else if(whoseTurn == 'o' )
     {
        whoseTurn = 'x';
     } 	  
    
}while((board1.gameState()== 3) && (board1.gameState() !=0) 
	&& (board1.gameState() != 1) && board1.gameState() !=2); 
}
/****
int main()
{
  char firstPlayer;
 
  // get first player
  std::cout<<"Hello!"<<std::endl;
  std::cout<<"Let's Play TicTacToe!"<<std::endl;
  std::cout<<"Who will go first? x or o?"<<std::endl;
  std::cin>>  firstPlayer;

  TicTacToe tic( firstPlayer); 
  std::cout<<"Great! Let's Play!"<<std::endl;
  tic.play(firstPlayer);

  return 0;
}*****/ 
