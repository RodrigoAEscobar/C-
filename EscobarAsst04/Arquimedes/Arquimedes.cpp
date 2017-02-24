#include <iostream>

using namespace std;

// Functions:
// Convert Gallons to Cc.
double gallonsToCc(double dGallons) {
	double dLiters;
	dLiters = (dGallons * 3.785);
	double dCc;
	dCc = (dLiters * 1000);
	return dCc;
}
// Convert Pounds to Grams.
double poundsToGrams(double dPounds) {
	double dOunces;
	dOunces = (dPounds * 16.0);
	double dGrams;
	dGrams = (dOunces * 28.35);
	return dGrams;
}
// Verify Density.
double density(double dCc) {
	double dDensity;
	dDensity = (dCc * 19.32);
	return dDensity;
}
int main ()
{
	// Variables.
	double dGallons, dLiters,  dCc, dPounds, dOunces, dGrams, dDensity, dGold = 0;
	char cAgain;

	do // Again loop.
	{
		// Get the Volume value.
		cout << "Please enter the volume in gallons: \n";
		cin >> dGallons;
		// Validate the input.
		while (dGallons < 1.0) {
			cout << "\nThe volume in gallons must be a positive number! \nPlease enter the number of gallons: " << endl;
			cin >> dGallons;
		}

		// Get the Weight value.
		cout << "\nPlease enter the weight in pounds: \n";
		cin >> dPounds;
		// Validate the input.
		while (dPounds < 1.0) {
			cout << "\nThe weight in pounds must be a positive number! \nPlease enter the weight in pounds: " << endl;
			cin >> dPounds;
		}

		// Process 
		dCc = gallonsToCc(dGallons);
		dGrams = poundsToGrams(dPounds);
		dDensity = density(dCc);

		// Validate density.
		if ((dDensity > (dGrams * 0.99)) && (dDensity < (dGrams * 1.01))) {
			cout << "\nEUREKA! We found " << dGrams << " grams of pure gold!" << endl;
			dGold = dGold + dGrams;
		} else {
			cout << "\nSorry, That is not pure gold." << endl;
		}

		// Test anoter item?
		cout << "\nDoes the king want to test another item? (Y/N): " << endl;
		cin >> cAgain;
	} while ((cAgain == 'Y') || (cAgain == 'y'));
	cout << "Your Highness, We have calculated a total of " << dGold << " grams of pure gold!" << endl;
	cout << "Have a nice day!" << endl;

	return 0;
}