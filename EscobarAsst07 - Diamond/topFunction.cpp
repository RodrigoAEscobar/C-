/*
 * File: topFunction.cpp
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

/*
* Name:			Closing.
* Parameters:	Integers and a character.
* Result:		Will draw the top middle of the diamond
*/
void opening(int iCount, char cLetter) { 
	int i, j, k;
	// For loop that place the first character at the middle point.
	for (i = 1; i <= (iCount / 2); i++) {
		cout << " ";
	}
	cout << cLetter << endl;
	// For loop that place the decreasing spaces from the top middle point.
	for( i = ((iCount / 2) - 1); i >= 1; i-- ) {
		for( j = 0; j < i; j++ ) {
			cout << " ";
		}
		cout << cLetter;
		// For Loop that place the increasing spaces between characteres.
		for(k = (iCount - 3); k >= (j * 2); k-- ) {
			cout << " ";
		}
		cout << cLetter << endl;
	}
	// Middle line of diamond
	cout << cLetter;
	for (i = 2; i <= (iCount - 1); i++) {
		cout << " ";
	}
	cout << cLetter;
}