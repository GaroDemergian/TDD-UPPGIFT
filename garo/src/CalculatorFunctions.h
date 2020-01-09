/**********************************
* Filename: functions.h
* 
* author: Garo Demergian
* created: 2020-01-06
* 
* **********************************/

#ifndef CALCULATORFUNCTIONS_H
#define CALCULATORFUNCTIONS_H

#define RESET "\033[0m"
#define RED "\033[31m"    /* Red */
#define YELLOW "\033[33m" /* Yellow */
#define BLUE "\033[34m"   /* Blue */
#define WHITE "\033[37m"  /* White */

void welcomeMSG();
int getAndValidateInput();
int getAndValidateChoice(int validNumber);
int getCircumference(int first, int second);
int getArea(int first, int second);
int getVolume(int first, int second, int third);
int getFirstEdge();
int getSecondEdge();
int getHeight();

#endif