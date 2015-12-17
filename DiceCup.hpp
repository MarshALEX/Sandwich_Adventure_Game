/*************************************
 * **author: Alexandria Marsh
 * **Date: June 6, 2015
 * **Description: This file contains the DiceCup
 * 		class specification file to be used in the 
 * 		DiceCup implementation file.
 ***********************************/

#ifndef DICECUP_HPP
#define DICECUP_HPP

class DiceCup
 {
	private:
		int numDice;
		int numFaces;

	public:
		DiceCup();
		DiceCup(int, int);
		void setNumDice(int);
		void setNumFaces(int);
		int rollDice();
};
#endif
 			
