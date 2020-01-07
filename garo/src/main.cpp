/**********************************
* Filename: main.cpp
* 
* author: Garo Demergian
* created: 2020-01-06
* porpose: The porpose of this programe is to calculate circumference, area and/or
*   volume of a square, rectangle or cube. The user input values and the program 
*   will calculate and print out the result to the screen.
* 
* ver: 2020-01-06 first version
* 
* **********************************/

#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    bool status = true;

    while (status)
    {
        double circumference = 0;
        double area = 0;
        double volume = 0;
        int choice = 0;

        welcomeMSG();
        choice = getAndValidateChoice(2); // 2 valid choices. 1 or 2

        if (choice == 1)
        {
            cout << "What would you like to calculate? " << endl;
            cout << "Press 1 for circumference" << endl;
            cout << "Press 2 for area" << endl;
            cout << endl;

            choice = getAndValidateChoice(2); // 2 valid choices. 1 or 2

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
                // The programe should never get here.
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

            choice = getAndValidateChoice(3); // 3 valid choices. 1, 2 or 3.

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
                // The programe should never get here.
                break;
            }
        }
        else
        {
            //The program should never get here
            cout << "Not a valid choice" << endl;
            cout << endl;
        }

        cout << "Press 1 to terminate the program or 2 to make a new calculation" << endl;
        cout << endl;
        if (getAndValidateChoice(2) == 1)
        {
            status = false;
        }
    }

    return 0;
}
