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

/*
* Name:		Closing.
* Parameters:	Integers and a character.
* Result:		Will draw the bottom half of the diamond
*/
void closing(int iCount, char cLetter) { 
	int i,j,k;
	// For loop that place the increasing spaces from the bottom middle point.
	for( i = (iCount / iCount); i <= ((iCount / 2) - 1); i++ ) {
		for( j = 0; j < i; j++ ) {
			cout << " ";
		}
		cout << cLetter;
		// For Loop that place the decreasing spaces between characters.
		for(k = (iCount - 3); k >= (j * 2); k-- ) {
			cout << " ";
		}
		cout << cLetter << endl;
	}
	// For loop that place the last character at the middle point.
	for (i = 0; i < (iCount / 2); i++) 
		cout << " " ;
	cout << cLetter << endl;
}