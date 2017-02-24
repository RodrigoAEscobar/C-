#include <iostream>
#include"calls3.h"
using namespace std;

int callMe2(int iNum) {
	cout << "I got call 2, with: " << iNum << endl;
	return callmeThree(iNum, -2);
}