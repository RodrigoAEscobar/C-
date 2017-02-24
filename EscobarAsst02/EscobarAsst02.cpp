/**
*
* File: RodrigoEscobarSmallIntegers.cpp
* Purpose: Demonstrate ability to use VC++ and submit results
*
* Project: CSIS 2100 Assignment 01
* Company: Nova Southeastern University
* Supervisor: Dr. Michael Van Hilst
*
* Author: Rodrigo Escobar
* History: Created August 24 2012
* Assisted by: <Names of anyone who helped youm, else noone>
* References: Book: Starting out with C++ Early Objects, 7th edition; Gaddis
*
* (c) Copyright Rodrigo Escobar 2012 All rights reserved.
*
**/
// This program will read 3 integers and determines and print the smallest number in the group.

#include <iostream>
using namespace std;

int main()
{

int FirstNumber;
int SecondNumber;
int ThirdNumber;
int SmallestNumber;

// INPUT
		cout << "Please enter three numbers separated by space, then press enter : \n";
		cin >> FirstNumber >> SecondNumber >> ThirdNumber; 
		//The line above will get the #'s from the user and assing them to the respective
		//variables.

// PROCESSING

		/* 
		   This will compare the first and the second numbers, if the second is smallest the value will be assigned 
		   to the SmallestNumber variable. 
		   Then will compare the Second number with the third, if the third number is the smaller, that value
		   will be assigned to the SmallestNumber variable; if the Second number is smallest than the third, 
		   The third number will be compared with the first number, if the first is smaller, the variable
		   SmallestNumber will have the value of the First Number; otherwise we can confirm that the 
		   Third number is the smallest one.
	    */
		if (FirstNumber > SecondNumber)
		{
			SmallestNumber = SecondNumber;
		}
		
		if (SecondNumber > ThirdNumber)
		{
			SmallestNumber = ThirdNumber;
		}
		else if (ThirdNumber > FirstNumber)
		{
			SmallestNumber = FirstNumber;
		}
		else
		{
			SmallestNumber = ThirdNumber;
		}

// OUTPUT		
		// This will display the value of the SmallestNumber integer.
		cout << "The smallest number you enter is:" << endl;
		cout << SmallestNumber << endl;

			// System pause was included to pause the program to facilitate the required screen shot.
			// this will only work on windows, for any other systems, the line must be erased.
			system ("pause") ;

			return 0; // Return the 0 value to the main integer

}
