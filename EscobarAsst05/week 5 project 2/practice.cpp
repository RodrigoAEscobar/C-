/*
1) create a program that prompts the user for an integer,
and reports whether or not the number they gave is prime.
Use a separate isPrime() function

2) Create a loop to keep doing the prime thing until 0 is entered.

3) if the number is not prime, print out all of the factor other than 1 or the number itself.
Use a separate listFactors() function 

4) You may want to use the "mod" operator (%), 
Mod returns the remainder of a integer division
7 % 3 = 1
15 % 3 = 0 - 3 is a factor of 15
*/

#include <iostream>
using namespace std;

// Functions

// Is prime function
bool isPrime(double dNumber, double dDivisor) {
	double dPrime;
	if ((dNumber/dDivisor) == 0.0){
		dPrime = true;
	} else {
		dPrime = false;
	}
	return dPrime;
}



// List factors
// double listFactors(double dNumber) {
//	double dFactors;
//	dFactors = (dNumber % dNumber);
//	return dFactors
// }


int main()
{
	// Variables
	double dNumber, dRemainder, dPrime, dFactors, dDivisor='2.0';

	cout << " Please enter an integer: " << endl;
	cin >> dNumber;

	// Process

	dPrime = isPrime(dNumber, dDivisor);
	if (dPrime == true) { 
		cout << dNumber << " is a Prime!" << endl;
	} else {
		dDivisor = dDivisor++,
			cout << " Find the list of Factors" << endl;
	}


	return 0;
} 


// function that outputs to cout "hi"
// function that outputs to cout "you"
// write main that calls the two functions to say:
// "you hi you"
// void sayHi() {
// cout << "hi";
// }
