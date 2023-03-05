/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include "func.h"
#include<iostream>
using std::cout;
using std::cin;

int main() 
{
	int selection;
	string dna;
	do {
		cout<<"***Main Menu***"<<"\n";
		cout<<"1-Get GC Content"<<"\n";
		cout<<"2-Get DNA Complement"<<"\n";
		cout<<"3-exit"<<"\n";
		cout<<"Enter number for function you would like to select: ";
		cin>>selection;

		if (selection == 1) {
			cout<<"Enter a dna string in all caps using only C,T,A,G: ";
			cin>>dna;
			cout<<"\n"<<"The answer is: ";
			cout<<get_gc_content(dna)<<"\n";
		} else if (selection == 2) {
			cout<<"Enter a dna string in all caps using only C,T,A,G: ";
			cin>>dna;
			cout<<"\n"<<"The answer is: ";
			cout<<get_dna_complement(dna)<<"\n";
		}
	} while(selection != 3);
	return 0;
}