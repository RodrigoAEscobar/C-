/*
 * File: EscobarAsst07.cpp
 * Purpose: Demonstrate ability to use loops and functions 
 * to draw a diamond shape using the user inputs.
 *
 * Project: CSIS 2100 Assignment 07
 * Company: Nova Southeastern University
 * Supervisor: Dr. Michael Van Hilst
 *
 * Author: Rodrigo Escobar
 * History: Created October 06 2012
 * Assisted by: Dr. Michael Van Hilst
 * References: Book: Starting out with C++ Early Objects, 7th edition; Gaddis
 *
 * (c) Copyright Rodrigo Escobar 2012 All rights reserved.
 */

#include <iostream>
using namespace std;

// List of Functions.
void opening(int, char);
void closing(int, char);

int main() {

	// Variables
	int iCount;
	char cLetter;

	// Process
	// Will prompt the user to input a letter character and an odd number equal or less than 21.

	cout << "Please enter one character and an odd number equal or less than 21 (eg. x 7);" << endl;
	cout << "I will draw a diamond using those inputs." << endl;
	cin >> cLetter >> iCount;
	// If loop to verify the imput number is equal or less than 21.
	if ((iCount < 1) || (iCount > 21)) {
		cout << "Value must be from 1 to 21! Please enter enter the character and" << endl;;
		cout << "a odd lenght value less than 21 (eg. x 7): " << endl;
		cin >> cLetter >> iCount;
	}
	// If loop to verify the imput number is odd.
	if ((iCount % 2) == 0) {
		cout << "The Value you entered is not odd, " << endl;
		cout << "Please enter the character and  a odd lenght value less than 21 (eg. x 7): " << endl;
		cin >> cLetter >> iCount;
	} else {
		// calling functions to draw the diamond
		opening(iCount, cLetter);
		cout << endl;
		closing(iCount, cLetter);
		cout << endl;
	}
	return 0;
}




