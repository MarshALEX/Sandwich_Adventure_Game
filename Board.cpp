/***************************
 * **Author: Alexandria Marsh
 * **Date: February 21, 2015
 * **Description: This is the implementation
 *      file for the Board class. It containts 
 *      methods for printing the game board, showing
 *      the game results, and having a player make
 *      a move
 *****************************/

#include "Board.hpp"
#include <iostream>
#include <iomanip>

Board::Board()
{
 for(int row=0; row < 3; row++)
  {
   for(int cols = 0; cols < 3; cols++)
    {  
       aryBoard[row][cols]= '.';
    }
  }  
}

/*********************************
 * 		gameState
 * **Description: This holds the information
 *     of the game status for if a player has won, 
 *     it is a draw, or if the game is still in progress.	
 * **Parameters: This function has no parameteres, but
 *     returns the value indicated by one of the possibilities.
 ************************************/
state Board::gameState()
{
 int game =  0;

 for (int row=0; row<3; row++) 
 {
   for(int column=0; column<3; column++)
     {
	
	if(aryBoard[row][column]=='.')
	 {
	   game = 1;
	   if( game==1) 
	    { return progress;}
	 }
	
	//o wins horizontal
	if(aryBoard[0][0]=='o' && aryBoard[0][1]=='o' && aryBoard[0][2]=='o')
	   return oWon;
	if(aryBoard[1][0]=='o' && aryBoard[1][1]=='o' && aryBoard[1][2]=='o')
           return oWon;  
	if(aryBoard[2][0]=='o' && aryBoard[2][1]=='o' && aryBoard[2][2]=='o')
           return oWon;

	//o wins veritcal
  	if(aryBoard[0][0]=='o' && aryBoard[1][0]=='o' && aryBoard[2][0]=='o')
           return oWon;
        if(aryBoard[0][1]=='o' && aryBoard[1][1]=='o' && aryBoard[2][1]=='o')
           return oWon;
        if(aryBoard[0][2]=='o' && aryBoard[1][2]=='o' && aryBoard[2][2]=='o')
           return oWon;

	//x wins horizontal 
	if(aryBoard[0][0]=='x' && aryBoard[0][1]=='x' && aryBoard[0][2]=='x')
           return xWon;
        if(aryBoard[1][0]=='x' && aryBoard[1][1]=='x' && aryBoard[1][2]=='x')
           return xWon;
        if(aryBoard[2][0]=='x' && aryBoard[2][1]=='x' && aryBoard[2][2]=='x')
           return xWon;

	//x wins vertical
        if(aryBoard[0][0]=='x' && aryBoard[1][0]=='x' && aryBoard[2][0]=='x')
           return xWon;
        if(aryBoard[0][1]=='x' && aryBoard[1][1]=='x' && aryBoard[2][1]=='x')
           return xWon;
        if(aryBoard[0][2]=='x' && aryBoard[1][2]=='x' && aryBoard[2][2]=='x')
           return xWon;

	//diagonal wins
	if(aryBoard[0][0]=='o' && aryBoard[1][1]=='o' && aryBoard[2][2]=='o')
           return oWon;
        if(aryBoard[0][2]=='o' && aryBoard[1][1]=='o' && aryBoard[2][0]=='o')
           return oWon;
        if(aryBoard[0][0]=='x' && aryBoard[1][1]=='x' && aryBoard[2][2]=='x')
           return xWon;
        if(aryBoard[0][2]=='x' && aryBoard[1][1]=='x' && aryBoard[2][0]=='x')
           return xWon;

        

    } 
 }
	  


 
}

 
/*******************************
 *		print
 *Description: This function prints the board
 *
 * Parameters:The function has no parameters
 *       and doesn't return a value
 ******************************/           

void Board::print( )
{
 std::cout<<"CURRENT BOARD"<<std::endl;
  for (int row = 0; row < 3; row++)
   {
	for( int col = 0; col< 3; col++)
	  {
	    std::cout<<std::setw(2)<< aryBoard[row][col];
	  }
	std::cout<<std::endl; 
   } 
}

/***************************************
 * 		printKey
 **Description: this function prints the key
	board for the user.
 **Parameters: the function has no parameters
	and doesn't return a value
****************************************/
void Board::printKey()
{
  std::cout<<"Here is the Board Key: "<<std::endl;
  std::cout<<std::endl;
  std::cout<<"__|_0_|_1_|_2__"<<std::endl;
  std::cout<<"0 |___|___|____ "<<std::endl;
  std::cout<<"1 |___|___|____"<<std::endl;
  std::cout<<"2 |___|___|____"<<std::endl;
  std::cout<<std::endl; 
  std::cout<<"Remember to enter the coordinates (row column)"<<std::endl;
} 		

/***************************
 * 	makeMove
 * **Description: This function takes in a users
 *     move and the current player.  
 *
 * **Parameters: This function takes the users moves as 
 *    an x and y coordinate as a paramater as well as the 
 *    current player.  The function returns true if the space
 *    is free and false if the space is taken.
 *******************************/
bool Board::makeMove(int X, int Y, char currentPlayer)
{
   if( aryBoard[X][Y]== '.')
     {
	aryBoard[X][Y] = currentPlayer;  
	 return true; 
     }   	
   if(( aryBoard[X][Y] == 'x') || (aryBoard[X][Y] == 'o'))
     {
        return false;
     }  
}


      
