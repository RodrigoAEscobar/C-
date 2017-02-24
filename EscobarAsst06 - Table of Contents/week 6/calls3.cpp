#include <iostream>
using namespace std;

int callmeThree(int iVal1, int iVal2) {
	cout << " I was also called with: " 
		<< iVal1 << " and " << iVal2 << endl;
	return iVal1 + iVal2;
}