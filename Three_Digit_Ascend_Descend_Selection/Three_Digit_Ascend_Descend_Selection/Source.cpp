/*
Justin Schrader  1  10/5/17
Three digit ascend descend selection
I am programming a system that will intake 3 numbers and then tell you if it is descending, ascending, or neither by using the three numbers as seperate variables.
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {// assigning variables
	int count = 0;
	int x;

	do {


		cout << "Please choose a random 3 digit number";// alows user input of numbers.
		cin >> x;



		int C = x % 10;//allows use of all three numbers as seperate variables
		int B = (x / 10) % 10;
		int A = (x / 100) % 10;
		bool ascending;
		bool descending;




		ascending = A != B && B != C;
		descending = ascending; //saying that if A does not equal B, and B does not equal C, then it is either ascending or descending.
		if (A > B) {
			ascending = false;
		}

		else {
			descending = false;
		}

		if (B > C) {
			ascending = false;
		}

		else {
			descending = false;
		}
		if (ascending) {
			cout << x << " is ascending.";
		}
		else if (descending) {
			cout << x << " is descending.    ";
		}
		else {
			cout << x << " is neither ascending or descending.   ";
		}

		pause();
		count = count + 1;
	} while (count < 30);

}
