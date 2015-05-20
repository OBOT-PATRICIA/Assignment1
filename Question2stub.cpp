/*
 *  Question2.cpp
 *
 *  Name: OBOT PATRICIA PETER
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: 45015352GA
 *
 *  Program that reads two integers and determines
 *  if first is a multiple of second
 *
 *  Stub file to enable you complete assignment #1 - question #2
 */
	
	#include <iostream>
	using namespace std;
	
	int main()
	{
	// Variable declaration
	int firstInteger;
	int secondInteger;
	
	// display welcome messages to user
	cout << "Welcome - This program reads two integers\n";
	cout << "and determines if first is a multiple of second\n\n";
	
	// Read first integer
	cout << "Enter first integer value - ";
	cin>>firstInteger;
	
	// Read second integer
	cout << "Enter second integer value - ";
	cin>>secondInteger;
	
	// Determine if first is a multiple of second
	short myBool=firstInteger%secondInteger;
	if(myBool==0)
	{
		cout<<"The first is a multiple of the second"<<endl;
    }
	else cout<<"The first is not a multiple of the second"<<endl;
	
	cout << "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
