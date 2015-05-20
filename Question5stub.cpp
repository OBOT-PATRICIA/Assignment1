/*
 *  Question6.cpp
 *
 *  Name: OBOT PATRICIA PETER
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: 45015352GA
 *
 *  Program that calculates the squares and cubes of the integers from 0 to 10
 *
 *  Stub file to enable you complete assignment #1 - question #6
 */
	
	#include <iostream>
	#include <math.h> // library to use pow() function to calculate squares and cubes
	#include <iomanip> // library to use setw() function
	using namespace std;
	

 
 			
	int main()
	{
	
	// display welcome messages to user
	cout << "Welcome - This program calculates the squares and cubes\n";
	cout << "of the integers from 0 to 10 and prints using tabs\n\n";
	
	// TODO: Hint use pow(base, power) to calculate squares and cubes
	// Put code here ...
			cout<<"Integer"<<"   Square"<<"   Cube"<<endl;
	int i;
	for(i=0; i<=10; i++)
	{
	cout<<i<<setw(12);  // display i, set width to12
	cout<<pow(i,2)<<setw(10);  // display the square of i and set set width to 10
	cout<<pow(i,3)<<endl;
	}
	
	cout << "\nThanks and Goodbye"<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
