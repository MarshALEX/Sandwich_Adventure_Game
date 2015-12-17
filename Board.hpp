/*************************************
 * **Author: Alexandria Marsh
 * **Date: February 21, 2015
 * **Description: This is the specification file
 *      for the Board class.
 ***************************************/

#ifndef BOARD_HPP
#define BOARD_HPP
#include <stdio.h>

enum state {xWon, oWon, draw, progress};

class Board
{
  private:
	int intX;
	int intY;
	char aryBoard[3][3]; 
  public:
	Board();
	void print();
	void printKey();
	bool makeMove(int X, int Y, char currentPlayer);
	state gameState();
};
#endif    
      
