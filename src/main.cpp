/**********************************
* Filename: main.cpp
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
#include <fstream>
#include <string>
#include "functions.h"

using namespace std;

int main()
{
    int circumference = 0;
    int area = 0;
    int volume = 0;
    int choice = 0;

    while (true)
    {
        welcomeMSG();
        choice = getAndValidateChoice(2);

        if (choice == 1)
        {
            choice = 0;
            cout << "What would you like to calculate? " << endl;
            cout << "Press 1 for circumference" << endl;
            cout << "Press 2 for area" << endl;
            cout << endl;

            choice = getAndValidateChoice(2);

            switch (choice)
            {
            case 1:
                circumference = getCircumference();
                cout << "circumference: " << circumference << endl;
                break;

            case 2:
                area = getArea();
                cout << "area: " << area << endl;
                break;

            default:
                cout << "Not a valid input!" << endl;
                cout << endl;
                break;
            }
        }
        else if (choice == 2)
        {
            choice = 0;
            cout << "What would you like to calculate? " << endl;
            cout << "Press 1 for circumference" << endl;
            cout << "Press 2 for area" << endl;
            cout << "Press 3 for volume" << endl;
            cout << endl;

            choice = getAndValidateChoice(3);

            switch (choice)
            {
            case 1:
                circumference = getCircumference();
                cout << "circumference: " << circumference << endl;
                break;

            case 2:
                area = getArea();
                cout << "area: " << area << endl;
                break;

            case 3:
                volume = getVolume();
                cout << "volume: " << volume << endl;
                break;

            default:
                break;
            }
        }
        else
        {
            cout << "Not a valid choice" << endl;
            cout << endl;
        }
    }

    //The program should never get here!
    return 0;
}
