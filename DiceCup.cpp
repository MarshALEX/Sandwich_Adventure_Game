/*******************************************
 * **Author: Alexandria Marsh
 * **Date: June 6 2015
 * **Decription: This is the implementing file for the 
 * 	Box class.  This program asks the user for the
 * 	amount of dice and the number of faces on the 
 * 	dice.  Then the program rolls each dice and adds
 * 	the rolled faces to create the sum.  the program 
 * 	prints the sum of the rolled faces.
**************************************/

#include <iostream>
#include "DiceCup.hpp"
#include <cstdlib>
#include <ctime> 

DiceCup::DiceCup()
 {
	setNumDice(1);
	setNumFaces(2);
 }	

DiceCup::DiceCup(int diceIn, int faceIn)
 {
	setNumDice(diceIn);
	setNumFaces(faceIn);
 }

void DiceCup::setNumDice(int diceIn) 
 {
	if(diceIn <= 0)
	 {
	       numDice = 0;
	       std::cout<<"ERROR: Number of Dice now: 0"
			<<std::endl;
	  }
	else{
		numDice = diceIn;
	  }
 }

void DiceCup::setNumFaces(int faceIn)
 {
	if(faceIn <= 0)
	  {
		numFaces = 0;
		std::cout<<"ERROR: Number of Faces now: 0"
			 <<std::endl;
	  }
	else{
		numFaces = faceIn;
	  }
 }	
/********************************
	DiceCup::rollDice

 * **Author:Alexandria Marsh
 * **Date: February 7, 2015
 * **Description: This function uses the user input of
 * 	the number of dice and faces on those dice to create
 * 	a random roll.  The function keeps track of the sum of
 * 	the roll and returns the total count.
 * **Parameters:  The function takes in the user input of 
 * 	of dice and number of faces on those dice, as well as
 * 	 how many times the dies should be rolled.  The function
 * 	 returns the sum of the rolled dice. 
 ******************************/
int DiceCup::rollDice()
  {
	int total = 0;
	
	for(int i = 0; i < numDice; i++)
	  {
	    total = total + std::rand() % numFaces + 1;
	  }
	return total;
  }
/***
int main()
 {
	int dicenum, facenum, rolls;
	unsigned seed;

	
	//prompt user for number of dice 
	std::cout<<"Enter the number of dice: "<<std::endl;
	std::cin>> dicenum;

	//prompt user for number of faces
	std::cout<<"Enter the number of faces: "<<std::endl;
	std::cin>> facenum;

	DiceCup cup = DiceCup(dicenum, facenum);
	
	std::cout<<"How many rolls would you like to do?"<<std::endl;
	std::cin>> rolls;
	
	for(int i=1; i<= rolls; i++)
	 {
		std::srand(seed);
		seed=time(0);
		std::cout<<"The sum is: "<<cup.rollDice()<<std::endl;
	 } 
	 

	return 0;
 }***/
  
