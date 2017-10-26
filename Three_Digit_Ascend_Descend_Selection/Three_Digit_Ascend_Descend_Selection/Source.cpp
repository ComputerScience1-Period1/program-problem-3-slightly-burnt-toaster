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
	int x;
	

	  cout << "Please choose a random 3 digit number";// alows user input of numbers.
	  cin >> x;



	int C = x % 10;//allows use of all three numbers as seperate variables
	int B = (x / 10) % 10;
	int A = (x / 100) % 10;
	bool ascending;
	bool descending;

 // defining the variable before using it helps the computer know what ther variable holds
	
	
		ascending = A != B && B != C;
	descending = ascending; //This statment is saying that if a is not equal b and b does not equal c then this number is assending.
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
		cout << "The numbers are Ascending.    ";
	}
	 else if (descending) {
		cout << "The numbers are Descending.    ";
	}
	 else {
	cout << "The numbers are Neither ascending or descending.   ";
}

pause();
}
