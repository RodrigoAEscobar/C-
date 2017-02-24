#include <iostream>
using namespace std;

/*int getTwice (int iInput) {
int iOutput = iInput * 2;
return iOutput;
}*/
double convertFtoC(double dTempF) {
	double dTempC;

	dTempC = (((dTempF - 32)*5.0)/9.0);
	return dTempC;
}
double convertCtoF(double dTempC) {
	double dTempF;

	dTempF = ((dTempC * 9.0/5.0)+32);
	return dTempF;
}
int main () {
	int iVal1;
	int iVal2;
	char cTempForm = 'F';

	cout << "Please enter the current temperature: ";
	cin >> iVal1;
	cout << "Enter F for Farenheith or C for Celcious: ";
	cin >> cTempForm;
	// convertions
	if ('f' == cTempForm || 'F' == cTempForm) {
		cout << "The temperature you enter is: " << iVal1 << " degrees Farenheith."<< endl;
	} else {
		cout << "The temperature you enter is: " << iVal1 << " degrees Celcious."<< endl;
	}
	if ('f' == cTempForm || 'F' == cTempForm) {
		iVal2 = convertFtoC(iVal1);
		cout << "The temperature in Celcious is: " << iVal2 << endl;
	} else if (cTempForm == 'c') {
		iVal2 = convertCtoF(iVal1);
		cout << "The temperature in Farenheith is: " << iVal2 << endl;
	}
	// Hot, nice or cold
	if (30 <= iVal2) {
		cout << "Is a hot day!\n";
	} else if ((29 < iVal2) || (20 <= iVal2)) {
		cout << "Is a nice day!\n";
	} else {
		cout << "Is a cold day!\n";
	}
	return 0;
}
