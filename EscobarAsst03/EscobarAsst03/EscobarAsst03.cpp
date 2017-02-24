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
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 															//
// King Hiero II of Syracuse has hired you to write a program to determine whether or 					//
// not the gold in some of his possessions is pure. 									//
// You must write a program with a name of your own choosing, that will report whether 					//
// each an item is pure gold or not. 											//
// Luckily for you, you have access to Wikipedia and can use your new found knowledge					//
// that the density of pure gold is 19.32 grams per cubic centimeter (as measured on earth).				//	
//															//
// For the decision, you will need a function that takes both the weight and the volume of the item, 			//
// and returns true or false depending on whether the purity is within 1% of the expected density. 			//
// That means they can be up 1% more or less than the expected density and still be considered pure 			//
// by King Hiero II (though not by Swiss bankers, whose standards are somewhat higher). 				//
// To make the determination, compare the volume in CCs times 19.32 to the weight in grams times 0.99 			//
// (it must be greater than this minimum) and times 1.01 (it must be less than this maximum).				//
//															//
// Unfortunately, you don�t have a scale that measures the weight of large items in grams. 				//
// But the scale at a nearby Publix can measure their weight in pounds. So you will need 				//
// an additional function that takes pounds as input and returns the equivalent number of grams. 			//
// These large items are also irregular in shape, so to measure their volume, you must immerse them in your bathtub	//
// to see how much water they displace. From your son�s high school project on water conservation, you have already	// 
// marked your bathtub for measurement in gallons. So you will need a third function that takes the volume in gallons	//
// as a parameter and returns the equivalent number of cubic centimeters.						//
//															//
// To convert gallons to cubic centimeters, you should perform the calculation in two steps. 				//
// First gallons to liters, at 3.785 liters per gallon, and then liters to cubic centimeters, 				//
// at 1000 cubic centimeters per liter. 										//
// Similarly to convert pounds to grams, you can convert pounds to ounces at 16 ounces per pound, 			//
// and then ounces to grams at 28.35 grams per ounce.									//
//															//
// Your main function should prompt for and read two values, the weight in pounds and the volume in gallons. 		//	
// It should then report whether or not it is pure gold.								//
// For this assignment, you may not copy work from other students. 							//
// Include appropriate comments to explain what each part of your program is doing. 					//
// In honor of Archimedes, you may yell Eureka! when you get it working.						//
// As a test, 3 gallons of gold weighing 480 pounds should test pure..							//
//															//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
#include <iostream>
using namespace std;

// Functions
double poundsToGrams(double dPound) {
double dGrams;
// 1 us Lb = 453.59237 Grams, this value is rounded to 1 decimal point on the formula.
dGrams = (dPound * 453.6); 
return dGrams;
}

double gallonsToCc(double dGallons) {
double dCc;
// 1 Us Gallon = 3.785412 Liters, this value was rounded to one decimal point on the formula.
dCc = (dGallons * 3.8 * 1000.0);
return dCc;

}

int main()
{
double dPound, dGallon; 
int iGrams, iCc, iTest, iGold;
           
  // get # of gallons             
  cout << "Please enter the volume in gallons:  \n" ;
  cin >> dGallon;
  while ((dGallon = 0) || (dGallon <= -999)) {
cout << "The volume in gallons must be a positive number! \nPlease enter the number of gallons:  \n" ;
cin >> dGallon;
  }
  // get the weight
  cout << "Please enter the weight in pounds:  \n" ;
  cin >> dPound;
  while ((dPound = 0) || (dPound <= -999)) {
cout << "The weight must be a positive number! \nPlease enter the weight in pounds:  \n" ;
cin >> dPound;
  }

cout << iGrams << endl; // to test values
cout << iCc << endl; // to test values

iTest = (iGrams / iCc);
cout << iTest << endl;

		return 0 ;
}



