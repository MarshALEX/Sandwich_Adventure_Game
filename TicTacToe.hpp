/************************************
 * **Author: Alexandria Marsh
 * **Date: February 21, 2015
 * **Description: This file containts the specifications
 *     of the TicTacToe class. 
 *************************************/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"

class TicTacToe
{
 private:
	Board board1;
	char whoseTurn;
	char x;
	char o; 
 public: 
	TicTacToe(char);
	void play(char);

};
#endif     
