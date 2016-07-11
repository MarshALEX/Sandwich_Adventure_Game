#############################################
#Author: Alex Marsh
#Date: June 6, 2015
#Description: Makefile for the final project 

###############################################

#files for the final project
CXX = game.cpp
CXX += Room0.hpp
CXX += Room0.cpp
CXX += Room1.hpp
CXX += Room1.cpp
CXX += Room2.hpp
CXX += Room2.cpp
CXX += Room3.hpp
CXX += Room3.cpp
CXX += Room4.hpp
CXX += Room4.cpp
CXX += Room5.hpp
CXX += Room5.cpp
CXX += Room6.hpp
CXX += Room6.cpp
CXX += Room7.hpp
CXX += Room7.cpp
CXX += Room8.hpp
CXX += Room8.cpp
CXX += Room9.hpp
CXX += Room9.cpp
CXX += Room10.hpp
CXX += Room10.cpp
CXX += Player.hpp
CXX += Player.cpp
CXX += Rooms.hpp
CXX += Rooms.cpp
CXX += DiceCup.hpp
CXX += DiceCup.cpp
CXX += Car.hpp
CXX += Car.cpp
CXX += Board.hpp
CXX += Board.cpp
CXX += TicTacToe.hpp
CXX += TicTacToe.cpp
CXX += Hero.hpp
CXX += Hero.cpp

#-Wall turns on all warning
CXXFLAGS = -Wall

#-pedantic-errors strictly enforces the standard
CXXFLAGS += -pedantic-errors

#-g turn on debug information
CXXFLAGS += -g

#executable names
PROG = playSandwich

all: final 

final:Hero.hpp Hero.cpp Board.hpp Board.cpp TicTacToe.cpp TicTacToe.hpp Car.cpp Car.hpp DiceCup.hpp DiceCup.cpp game.cpp Room5.hpp Room5.cpp Room6.hpp Room6.cpp Room7.hpp Room7.cpp Room8.hpp Room8.cpp Room9.hpp Room9.cpp Room10.cpp Room10.hpp Room0.hpp Room0.cpp Room4.hpp Room4.cpp Room3.hpp Room3.cpp Room1.hpp Room1.cpp Room2.hpp Room2.cpp Player.hpp Player.cpp
	g++ ${CXX} ${CXXFLAGS} -o ${PROG}

clean: rm -f playSandwich *.o
