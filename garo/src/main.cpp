/*********************************************************************************
* Filename: main.cpp
* 
* author: Garo Demergian
* created: 2020-01-06
* porpose: The porpose of this programe is to calculate circumference, area and/or
*   volume of a square, rectangle or cube. The user input values and the program 
*   will calculate and print out the result to the screen.
* 
*********************************************************************************/

#include <iostream>
#include "CalculatorFunctions.h"

int main()
{
    bool status = true;

    while (status)
    {
        int circumference = 0;
        int area = 0;
        int volume = 0;
        int first = 0;
        int second = 0;
        int third = 0;
        int choice = 0;

        welcomeMSG();
        choice = getAndValidateChoice(2); // 2 valid choices. 1 or 2

        if (choice == 1)
        {
            std::cout << "What would you like to calculate? " << std::endl;
            std::cout << "Press " << WHITE << "1 " << RESET << "for circumference" << std::endl;
            std::cout << "Press " << WHITE << "2 " << RESET << "for area" << std::endl;
            std::cout << std::endl;

            choice = getAndValidateChoice(2); // 2 valid choices. 1 or 2

            switch (choice)
            {
            case 1:
                first = getFirstEdge();
                second = getSecondEdge();
                circumference = getCircumference(first, second);
                std::cout << BLUE << "circumference: " << WHITE << circumference << RESET << std::endl;
                break;

            case 2:
                first = getFirstEdge();
                second = getSecondEdge();
                area = getArea(first, second);
                std::cout << BLUE << "area: " << WHITE << area << RESET << std::endl;
                break;

            default:
                // The programe should never get here.
                break;
            }
        }
        else if (choice == 2)
        {
            choice = 0;
            std::cout << "What would you like to calculate? " << std::endl;
            std::cout << "Press " << WHITE << "1 " << RESET << "for circumference" << std::endl;
            std::cout << "Press " << WHITE << "2 " << RESET << "for area" << std::endl;
            std::cout << "Press " << WHITE << "3 " << RESET << "for volume" << std::endl;
            std::cout << std::endl;

            choice = getAndValidateChoice(3); // 3 valid choices. 1, 2 or 3.

            switch (choice)
            {
            case 1:
                first = getFirstEdge();
                second = getSecondEdge();
                circumference = getCircumference(first, second);
                std::cout << BLUE << "circumference: " << WHITE << circumference << RESET << std::endl;
                break;

            case 2:
                first = getFirstEdge();
                second = getSecondEdge();
                area = getArea(first, second);
                std::cout << BLUE << "area: " << WHITE << area << RESET << std::endl;
                break;

            case 3:
                first = getFirstEdge();
                second = getSecondEdge();
                third = getHeight();
                volume = getVolume(first, second, third);
                std::cout << BLUE << "volume: " << WHITE << volume << RESET << std::endl;
                break;

            default:
                // The programe should never get here.
                break;
            }
        }
        else
        {
            //The program should never get here
            std::cout << RED << "Invalid choice" << RESET << std::endl;
            std::cout << std::endl;
        }

        std::cout << "Press " << WHITE << "1 " << RESET;
        std::cout << "to terminate the program or ";
        std::cout << WHITE << "2 " << RESET << " to make a new calculation" << std::endl;
        std::cout << std::endl;
        if (getAndValidateChoice(2) == 1)
        {
            status = false;
        }
    }

    return 0;
}