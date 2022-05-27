// postal rates of a letter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	double length, width, thickness;
	int dimensions = 0;

		cout << " Enter the length,width,thickness of your letter" << endl;
		cin >> length >> width >> thickness;

		if (dimensions <= 141000) {
			cout << " the postal rate is R 2.50";

		}

		else if (dimensions > 141000 && dimensions <= 440000) {
			cout << " the postal rate is R 5.00";
		}
		else if (dimensions > 4400000 && dimensions <= 2647500) {
			cout << " the postal rate is R 6.25";
		}
		else if (dimensions > 2647500) {
			cout << " this is a parcel";
		}

		


		return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
