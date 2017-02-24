/**
*
* File: EscobarAsst03-4.cpp
* Purpose: Demonstrate ability to use VC++ and submit results
*
* Project: CSIS 2100 Assignment 03-4
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
* Add more code or modify your code so that if the users something that is not a number, i.e. includes letters, 
* your program does not print any of the above lines, 
* but instead prints out "Idiot! Your input could not be read as a number. Get a life!"
*/

#include <iostream>
using namespace std;

int main()
{
	const int I_NOT_VALID = -999
	int iNumber = I_NOT_VALID;

//	cout << iNumber << endl;
	cout << "Please enter a number between 1 and 20: \n";
	cin >> iNumber;
	cout << iNumber << endl;

	// This check if the entered value is not a number and if the entered number
	// is between 1 and 20,if not, will alert the user.
	if ((iNumber != I_NOT_VALID) && (iNumber <= 0) || (iNumber > 20)) {
		cout << "The value you entered is not between 1 and 20. \n";
	} 	
	// This will check if the value is 8, 11 or 18 and change "A" for "An" on the statement.
	else if ( iNumber == 8 || iNumber == 11 || iNumber == 18) {
		cout << "You entered an " << iNumber << "." << endl;
	} 
	else if ( iNumber > 0 && iNumber < 20) {
		cout << "You entered a " << iNumber << "." << endl;
	} 
	// This will alert the user that the value entered is not a number and
	// Will sugest to have a life.
	else {
		cout << "Idiot! Your input could not be read as a number. Get a life! \n";
	}
	return 0;
}