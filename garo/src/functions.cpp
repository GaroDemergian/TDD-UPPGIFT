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
#include "functions.h"

using namespace std;

// Function for printing out a welcome massage to the user
void welcomeMSG() {
    cout << endl;
    cout << endl;
    cout << "Hello and welcome to SmartAss calculator " << endl;
    cout << "What would you like to calculate? " << endl;
    cout << "Press 1 for square or rectangle" << endl;
    cout << "Press 2 for cube" << endl;
    cout << endl;
}

// This function is used by other functions to get and validate user's input 
// a valid input must be a double and within 0 - 1000
double getAndValidateInput() {
    
    bool valid = false;
    double input;

    while(!valid){
        if(cin>>input){//this checks whether a double was entered
            if(input < 1000 && input > 0) valid = true;//then we have to see if this double is in range
        }else cin.clear();//some cleaning up
		
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//empty input stream

        if(!valid) std::cout << "this input is not valid\n";
    }
    return input;
}

// This function gets input from the user and validates if its 
// a valid int and if its in range
int getAndValidateChoice(int validNumber) {
    
    bool valid = false;
    int input;

    while(!valid){
        if(cin>>input){//this checks whether a double was entered
            if(input <= validNumber && input > 0) valid = true;//then we have to see if this double is in range
        }else cin.clear();//some cleaning up
		
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');//empty input stream

        if(!valid) std::cout << "this input is not valid\n";
    }
    return input;
}

// A simple function to get and calculate the circumference of a square or rectangle
// Circumference = (lenght + breadth) x 2
double getCircumference() {
    double circumference = (getFirstEdge()  + getSecondEdge()) * 2;
    return circumference;
}

// A simple function to get and calculate the area of a square or rectangle
// Area = lenght x breadth
double getArea() {
    double area = getFirstEdge() * getSecondEdge();
    return area;
}

// A simple function to get and calculate the volume of cube
// Volume = lenght x breadth x height
double getVolume() {
    double volume = getFirstEdge() * getSecondEdge() * getHeight();
    return volume;
}

// This function uses getAndValidateInput() to get the
// length of an edge in a square or rectangle
double getFirstEdge() {
    double edge;
    cout << "Please enter the length of the first edge! " << endl;
    cout << "Valid input is between 1 and 999" << endl;
    cout << endl;
    edge = getAndValidateInput();
    cout << endl;
    return edge;
}

// This function uses getAndValidateInput() to get the
// length of an edge in a square or rectangle
double getSecondEdge() {
    double edge;
    cout << "Please enter the length of the second edge! " << endl;
    cout << "Valid input is between 1 and 999" << endl;
    cout << endl;
    edge = getAndValidateInput();
    cout << endl;
    return edge;
}

// This function uses getAndValidateInput() to get the
// length of an edge in a square or rectangle
double getHeight() {
    double edge;
    cout << "Please enter the height of the third edge! " << endl;
    cout << "Valid input is between 1 and 999" << endl;
    cout << endl;
    edge = getAndValidateInput();
    cout << endl;
    return edge;
}