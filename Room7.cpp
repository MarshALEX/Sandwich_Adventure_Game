/****************************************** 
 **Authro: Alex Marsh
 **Date: June 6, 2015
 ** *Description: This is the implementation file
 **     for the Room7 class.
 *********************************************/

#include "Room0.hpp"
#include "Car.hpp"
#include "Room7.hpp"

#include <iostream>
#include <string>

class Room0;
/********************************
 *              constructor
 *******************************/
Room7::Room7(std::string name1):
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

std::string Room7::activity()
{
 std::string prize = "Mustard and Mayo";
 int userYear;
 std::string userMake;
 int userSpeed = 0;
 int choice;

 std::cout<<"Welcome to Level Seven of Your Sandwich Adventure."<<std::endl;
 std::cout<<std::endl;

 std::cout<<"In this level if you want to earn your sandwich item,"<<std::endl;
 std::cout<<" you need to go three rounds in the magic car."<<std::endl;
 std::cout<<"You must be careful because Alex-zilla has strict rules: "<<std::endl;
 std::cout<<"Rule 1: Don't go faster than 20mph.  You will die."<<std::endl;
 std::cout<<"Rule 2: Don't stop the car.  You will die."<<std::endl; 
 std::cout<<std::endl;
 std::cout<<"If you break either of these rule, Alex-zilla will eat you"<<std::endl;
 readyCheck();

 std::cout<<"Let's make a car first..."<<std::endl;
 std::cout<<std::endl; 
 std::cout<<"Please enter your car's year: "<<std::endl;
 std::cin>> userYear;

 std::cout<<"Please enter your car's make: "<<std::endl;
 std::cin.get();

 std::getline(std::cin, userMake);

 Car vechile = Car(userYear, userMake, userSpeed);

 for(unsigned int k=0; k<3; k++)
 { 
    std::cout<<"*************************"<<std::endl;
    std::cout<<"Please select an option: "<<std::endl;
    std::cout<<"1.) Accelerate the car by 10mph. "<<std::endl;
    std::cout<<"2.) Brake the car by 10mph. "<<std::endl;
    std::cin>> choice;

    if(choice == 1)
         {
             vechile.accelerate();
             std::cout<<"Your speed is "<<vechile.getSpeed()
                        <<std::endl;
         }
    if(choice == 2)
         {
             vechile.brake();
             std::cout<<"Your speed is "<<vechile.getSpeed()
                        <<std::endl;
         }
 }
 std::cout<<std::endl;
 std::cout<<"Alex-zilla is pleased."<<std::endl;

 std::cout<<"Congratulations! You have collected "
          <<prize<<" for the sandwich!"<<std::endl;

 return prize;
}

