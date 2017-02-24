/**
*
* File: EscobarAsst06.cpp
* Purpose: Demonstrate ability to use VC++ and submit results
*
* Project: CSIS 2100 Assignment 06
* Company: Nova Southeastern University
* Supervisor: Dr. Michael Van Hilst
*
* Author: Rodrigo Escobar
* History: Created October 03 2012
* Assisted by: <Names of anyone who helped youm, else noone>
* References: Book: Starting out with C++ Early Objects, 7th edition; Gaddis
*
* (c) Copyright Rodrigo Escobar 2012 All rights reserved.
*
**/
// This program will create a table of contents
#include <iostream>
#include <string>
using namespace std;

// Functions

void chapterNumTitle(string, string, string);
void sectionNumTitle(string, string, string);
void dots(int);
void helper(int);

int main() 
{
	// Variables

	string sCh1Name = "Introduction";
	string sCh2Name = "Using Variables"; 
	string sCh3Name = "Using If Statements";
	string sSec3_1Name = "If";
	string sSec3_2Name = "Else";
	int iLineLength;

	// Process

	chapterNumTitle("1", sCh1Name, " 1"); 
	chapterNumTitle("2", sCh2Name, "18");
	chapterNumTitle("3", sCh3Name, "29");
	sectionNumTitle("1", sSec3_1Name, "30");
	sectionNumTitle("2", sSec3_2Name, "37");
	helper(62);
	cout << endl;
	return 0;
}