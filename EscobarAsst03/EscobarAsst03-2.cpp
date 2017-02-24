/**
*
* File: EscobarAsst03-2.cpp
* Purpose: Demonstrate ability to use VC++ and submit results
*
* Project: CSIS 2100 Assignment 03-2
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
* Add more code or modify your code so that if the user enters a value that is less than 1 or greater than 20, 
* it prints out "The value you entered is not between 1 and 20." 
* Otherwise, and only if the value is between 1 and 20, it prints the statement as before.
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
	else {
		cout << "You entered a " << iNumber << "." << endl;
	}
	return 0;
}