#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Please insert the faculty number of a student: ";
	string facultyNumber;
	string theResult;
	cin >> facultyNumber;

	string educationalForm = facultyNumber.substr(3, 1);
	if (educationalForm == "1") {
		theResult == "full time education";
	}
	else if (educationalForm == "2") {
		theResult == "part-time education";
	}

	cout << "The educational form of this student is:" << theResult << endl;

	return 0;
}