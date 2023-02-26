//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int selection;
	int num;
	int num1;
	int num2;
	do {
		cout<<"***Main Menu***"<<"\n";
		cout<<"1-Factorial"<<"\n";
		cout<<"2-Greatest Common Divisor"<<"\n";
		cout<<"3-exit"<<"\n";
		cout<<"Enter number for function you would like to select:";
		cin>>selection;

		if (selection == 1) {
			cout<<"Enter number for factorial:";
			cin>>num;
			cout<<"\n";
			cout<<factorial(num)<<"\n";
		} else if (selection == 2) {
			cout<<"Enter first number:";
			cin>>num1;
			cout<<"\n";
			cout<<"Enter second Number:";
			cin>>num2;
			cout<<"\n";
			cout<<gcd(num1,num2)<<"\n";
		}
	} while(selection != 3);
	return 0;
}