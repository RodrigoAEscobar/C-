#include <iostream>
using namespace std;

int callMe(int iNumber) {
	cout << "I was called with number: " << iNumber << endl;
	return iNumber + 1;
}