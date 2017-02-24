#include <iostream>
#include <string>
using namespace std;

// Section Function
void sectionNumTitle(string sNum, string sName, string sPage) {
	int iLineLength, i, j;
	cout << "  Section" << " " << sNum  << ":  " << sName << " ";
	j = sPage.size();
	if (j > 999) {
		j = 4;
	}
	if (j > 99) {
		j = 3;
	}
	if (j > 9) {
		j = 2;
	} else 
		j = 1; 
	string sOutputLine = "  Section" + sNum  + ":  " + sName + " ";
	iLineLength = sOutputLine.size(); 
	for (i = (iLineLength + 4); i <= (62 - j); i++) {
		cout << "." ;
	}
	cout << " " << sPage << endl;
}