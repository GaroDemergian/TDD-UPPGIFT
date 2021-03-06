/**********************************
* Filename: functions.cpp
* 
* author: Garo Demergian
* created: 2020-01-06
* 
* ver: 2020-01-06 first version
* 
* **********************************/

#include <iostream>
#include "CalculatorFunctions.h"

// Function for printing out a welcome massage to the user
void welcomeMSG()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << RED << "******************************************" << std::endl;
    std::cout << RED << "*                                        *" << std::endl;
    std::cout << RED << "*                " << RESET << "SmartASS                " << RED << "*" << std::endl;
    std::cout << RED << "*               " << RESET << "Calculator               " << RED << "*" << std::endl;
    std::cout << RED << "*                                        *" << std::endl;
    std::cout << RED << "******************************************" << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << MAGENTA;
    std::cout << " * * * * * Program Instructions * * * * * " << RESET << std::endl;
    std::cout << "Valid input is " << WHITE << "numbers " << RESET << "only" << std::endl;
    std::cout << "Exception: numbers followed by letters or symbols." << std::endl;
    std::cout << "In that case the program will accept the number and discard what comes after." << std::endl;
    std::cout << std::endl;
    std::cout << "What would you like to calculate?" << std::endl;
    std::cout << "Press " << WHITE << "1 " << RESET << "for square or rectangle" << std::endl;
    std::cout << "Press " << WHITE << "2 " << RESET << "for cube or cuboid" << std::endl;
    std::cout << std::endl;
}

// This function is used by other functions to get and validate user's input
// a valid input must be a double and within 0 - 1000
int getAndValidateInput()
{

    bool valid = false;
    int input;

    while (!valid)
    {
        if (std::cin >> input)
        { //this checks whether a double was entered
            if (input < 1000 && input > 0)
                valid = true; //then we have to see if this double is in range
        }
        else
            std::cin.clear(); //some cleaning up

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //empty input stream

        if (!valid)
            std::cout << YELLOW << "this input is invalid\n" << RESET;
    }
    return input;
}

// This function gets input from the user and validates if its
// a valid int and if its in range
int getAndValidateChoice(int validNumber)
{

    bool valid = false;
    int input;

    while (!valid)
    {
        if (std::cin >> input)
        { //this checks whether a double was entered
            if (input <= validNumber && input > 0)
                valid = true; //then we have to see if this double is in range
        }
        else
            std::cin.clear(); //some cleaning up

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //empty input stream

        if (!valid)
            std::cout << YELLOW << "this input is invalid\n" << RESET;
    }
    return input;
}

// A simple function to get and calculate the circumference of a square or rectangle
// Circumference = (lenght + breadth) x 2
int getCircumference(int first, int second)
{
    return (first + second) * 2;
}

// A simple function to get and calculate the area of a square or rectangle
// Area = lenght x breadth
int getArea(int first, int second)
{
    return first * second;
}

// A simple function to get and calculate the volume of cube
// Volume = lenght x breadth x height
int getVolume(int first, int second, int third)
{
    return first * second * third;
}

// This function uses getAndValidateInput() to get the
// length of an edge in a square or rectangle
int getFirstEdge()
{
    int edge;
    std::cout << "Please enter the length of the first edge! " << std::endl;
    std::cout << "Valid input: " << WHITE << "1 " << RESET << "to " << WHITE << "999 " << RESET << std::endl;
    std::cout << std::endl;
    edge = getAndValidateInput();
    std::cout << std::endl;
    return edge;
}

// This function uses getAndValidateInput() to get the
// length of an edge in a square or rectangle
int getSecondEdge()
{
    int edge;
    std::cout << "Please enter the length of the second edge! " << std::endl;
    std::cout << "Valid input: " << WHITE << "1 " << RESET << "to " << WHITE << "999 " << RESET << std::endl;
    std::cout << std::endl;
    edge = getAndValidateInput();
    std::cout << std::endl;
    return edge;
}

// This function uses getAndValidateInput() to get the
// length of an edge in a square or rectangle
int getHeight()
{
    int edge;
    std::cout << "Please enter the height of the third edge! " << std::endl;
    std::cout << "Valid input: " << WHITE << "1 " << RESET << "to " << WHITE << "999 " << RESET << std::endl;
    std::cout << std::endl;
    edge = getAndValidateInput();
    std::cout << std::endl;
    return edge;
}