/**
*
* File: EscobarAsst03-1.cpp
* Purpose: Demonstrate ability to use VC++ and submit results
*
* Project: CSIS 2100 Assignment 03-1
* Company: Nova Southeastern University
* Supervisor: Dr. Michael Van Hilst
*
* Author: Rodrigo Escobar
* History: Created September 09 2012
* Assisted by: None
* References: Book: Starting out with C++ Early Objects, 7th edition; Gaddis
*
* (c) Copyright Rodrigo Escobar 2012 All rights reserved.
* 
* Description:
* Write the code that prompts the user to enter an integer between 1 and 20 (including 1 and 20),
* reads the value using cin, and then prints the value that they entered in a statement that begins with 
* "You entered a ". 
*/

#include <iostream>
using namespace std;

int main()
{
	int iNumber;

	cout << "Please enter a number between 1 and 20: \n";
	cin >> iNumber;
	cout << "You entered a " << iNumber << "." << endl;
	return 0;
}