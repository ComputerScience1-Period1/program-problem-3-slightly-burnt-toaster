/*
Justin Schrader  1  10/5/17
Three digit ascend descend selection
I am programming a system that will intake 3 numbers and then tell you if it is descending, ascending, or neither by using the three numbers as seperate variables.
*/

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . . \n";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//Variables
int x;
int T;
int A;
int B;
int C;


// MAIN
int main() {// assigning variables
	int T = 1;
	while (T < 31)
	{
		cout << "Enter three digit number \n"; //Allows user input of numbers.
		cin >> x;


		int C = x % 10; //Allows use of all three numbers as seperate variables
		int B = (x / 10) % 10;
		int A = (x / 100) % 10;
		bool ascending;
		bool descending;

		ascending = A != B && B != C;
		descending = ascending; //If A does not equal B, and B does not equal C, then it is either ascending or descending.



		if (A > B) {
			ascending = false; //Defining ascending requirements
		}

		else {
			descending = false; //Defining descending requirements
		}

		if (B > C) {
			ascending = false; //Defining ascending requirements
		}

		else {
			descending = false; //Defining descending requirements
		}

		if (ascending) {
			cout << "The number is ascending. \n"; //Printout for ascending numbers
		}

		else if (descending) {
			cout << "The number is descending. \n"; //Printout for descending numbers
		}

		else {
			cout << "The numbers are neither ascending or descending. \n"; //Printout for neither		
		}
		T++;
		_getch();
	}
		return 0;
	}
