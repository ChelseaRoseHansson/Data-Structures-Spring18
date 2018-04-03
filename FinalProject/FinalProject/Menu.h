#include <iostream>
#include <string>

using namespace std;

#ifndef MENU_H					// avoid repeated expansion
#define MENU_H


void splashScreen();
void computerProgrammingInCpp();
void javaProgramming();
void androidProgramming();
void iosProgramming();
void mainMenu();
int validate(string input, string checkType);
void userInput();
#endif
