#include <iostream>
#include <string>
using namespace std;

// Helper Function
void helper(int iLength) {
	bool bFlag = false;
	int iCounter = iLength;
	int iCounterInside = 0;
	for(;;)	{
		for (int iNumbers = 0; iNumbers < 10; iNumbers++) {
			if (bFlag == false) {
				iNumbers += 1;
				bFlag = true;
			}
			if (iCounterInside == iCounter) {
			} else {
				cout << iNumbers;
				iCounterInside++;
			}
		}
		if (iCounterInside == iCounter) {
		}
	}
}
