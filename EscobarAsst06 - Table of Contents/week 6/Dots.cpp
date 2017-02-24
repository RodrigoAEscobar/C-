#include <iostream>
#include <string>
using namespace std;

void dots(int iLineLength) {
	int iRepeat;
	// iTotal = (iLineLength - 62);
	for (iRepeat = 0; iRepeat <= 62 - iLineLength - 1; iRepeat++) {
		cout << ".";
	}
	cout << iLineLength << endl;
}


