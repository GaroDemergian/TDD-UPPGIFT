/**********************************
* Filename: functions.cpp
* 
* author: Garo Demergian
* created: 2020-01-06
* notes: 
* 
* 
* ver: 2020-01-06 first version
* 
* **********************************/

#include <iostream>
#include "functions.h"

using namespace std;

void welcomeMSG() {
    cout << endl;
    cout << endl;
    cout << "Hello and welcome to SmartAss calculator " << endl;
    cout << "What would you like to calculate? " << endl;
    cout << "Press 1 for square" << endl;
    cout << "Press 2 for cube" << endl;
    cout << endl;
}

int getAndValidateInput() {
    
    bool valid = false;
    int input;

    while(!valid){
        if(std::cin>>input){//this checks whether an integer was entered
            if(input < 1000 && input > 0) valid = true;//then we have to see if this integer is in range
        }else std::cin.clear();//some cleaning up
		
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//empty input stream

        if(!valid) std::cout << "this input is not valid\n";
    }
    return input;
}

int getAndValidateChoice(int validNumber) {
    
    bool valid = false;
    int input;

    while(!valid){
        if(std::cin>>input){//this checks whether an integer was entered
            if(input <= validNumber && input > 0) valid = true;//then we have to see if this integer is in range
        }else std::cin.clear();//some cleaning up
		
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//empty input stream

        if(!valid) std::cout << "this input is not valid\n";
    }
    return input;
}


int getCircumference() {
    int circumference = (getFirstEdge() * 2) + (getSecondEdge() * 2);
    return circumference;
}

int getArea() {
    int area = getFirstEdge() * getSecondEdge();
    return area;
}

int getVolume() {
    int volume = getFirstEdge() * getSecondEdge() * getHeight();
    return volume;
}

int getFirstEdge() {
    int edge;
    cout << "Please enter the length of the first edge! " << endl;
    cout << "Valid input is between 1 and 999" << endl;
    cout << endl;
    edge = getAndValidateInput();
    cout << endl;
    return edge;
}

int getSecondEdge() {
    int edge;
    cout << "Please enter the length of the second edge! " << endl;
    cout << "Valid input is between 1 and 999" << endl;
    cout << endl;
    edge = getAndValidateInput();
    cout << endl;
    return edge;
}
int getHeight() {
    int edge;
    cout << "Please enter the height of the third edge! " << endl;
    cout << "Valid input is between 1 and 999" << endl;
    cout << endl;
    edge = getAndValidateInput();
    cout << endl;
    return edge;
}