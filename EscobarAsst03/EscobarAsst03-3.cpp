/**
*
* File: EscobarAsst03-3.cpp
* Purpose: Demonstrate ability to use VC++ and submit results
*
* Project: CSIS 2100 Assignment 03-3
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
* Add more code or modify your code so that if the user enters the values 8, 11, or 18, 
* the statment that is printed is "You entered an" instead of "You entered a". 
*/

#include <iostream>
using namespace std;

int main()
{
	int iNumber;

	cout << "Please enter a number between 1 and 20: \n";
	cin >> iNumber;
	// This check if the entered value is between 1 and 20, if not, will alert the user.
	if ((iNumber <= 0) || (iNumber > 20)) {
		cout << "The value you entered is not between 1 and 20. \n";
	}
	// This will check if the value is 8, 11 or 18 and change "A" for "An" on the statement.
	else if ( iNumber == 8 || iNumber == 11 || iNumber == 18) {
		cout << "You entered an " << iNumber << "." << endl;
	} 
	else {
		cout << "You entered a " << iNumber << "." << endl;
	}
	return 0;
}