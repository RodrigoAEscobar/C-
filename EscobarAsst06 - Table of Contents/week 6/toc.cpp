#include <iostream>
#include <string>
using namespace std;

// Functions

void chapterNumTitle(int, string);
void sectionNumTitle(int, string);
void dots(int);


int main() {
	// Variables

	string sCh1Name = "Introduction";
	string sCh2Name = "Using Variables"; 
	string sCh3Name = "Using If Statements";
	string sSec3_1Name = "If";
	string sSec3_2Name = "Else";
	int iLineLength;


	chapterNumTitle(1, sCh1Name); 
	dots(iLineLength);
	chapterNumTitle(2, sCh2Name);
	dots(iLineLength);
	chapterNumTitle(3, sCh3Name);
	dots(iLineLength);
	sectionNumTitle(1, sSec3_1Name);
	dots(iLineLength);
	sectionNumTitle(2, sSec3_2Name);
	dots(iLineLength);

	return 0;
}


void chapterNumTitle(int iNum, string sName) {
	cout << "Chapter" << " " << iNum  << ":  " << sName << " ";	
}

void sectionNumTitle(int iNum, string sName) {
	cout << "  Section" << " " << iNum  << ":  " << sName << " ";
}

void dots(int iLineLength) {
	int iRepeat;
	for (iRepeat = 0; iRepeat <= 62; iRepeat++) {
		cout << ".";
	}
	cout << " 1" << endl;
}

void sectionNumTitle(int iNum, string sName) {
	int iLineLength;
	cout << "  Section" << " " << iNum  << ":  " << sName << " ";
	string sOutputLine = "  Section" + " " + iNum  + ":  " + sName + " ";
	iLineLength = sOutputLine.size(); 
	cout << sOutputLine;
}
