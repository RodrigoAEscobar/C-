#include <iostream>
using namespace std;

int main () 
{
	int iValue;
	int iInput;
	do {
		cout << "Enter a value or 0 to quit: ";
		cin >> iInput;
		// if (iInput > 0) {
		iValue = 0;
		while (iValue <= iInput) {
			cout << iValue;
			iValue++;
		}
		cout << endl;
		// equivalent with 3 parts in one line
		for (iValue = 0; iValue <= iInput; iValue++) {
			cout << iValue << " ";
		}
		cout << endl;
		// }
	} while (iInput > 0);
	
	return 0;
	}
