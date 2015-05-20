/*
 *  Question4.cpp
 *
 *  Name: OBOT PATRICIA PETER
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: 45015352GA
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 *  Stub file to enable you complete assignment #1 - question #4
 */
	
	#include <iostream>
	#include <string>
	#include <math.h>
	using namespace std;
	
	int main()
	{
	// Variable declaration
	int digits;
	
	// display welcome messages to user
	cout << "Welcome - This program reads a five-digit integer\n";
	cout << "separates the integer into its digits and prints them\n";
	cout << "separated by three spaces each\n\n";
	
	// TODO: Read integer using cin
	cout << "Enter five digit integer value - ";
	cin>>digits;
	
	// check if digit is a five digit integer
/*	if (to_string(digits).length() < 5 || to_string(digits).length() > 5)
	{
	cout << "\nERROR - Please enter a five digit integer";
	} else {
 */
	// TODO: Separate the integer into its digits and prints them separated by three spaces each
	int shift_decimal_point=10000;		// shift_decimal_point is number of decimal place to be shifted
	double number2;
	double number3;
	int counter=1;
	while(counter>=1 && counter<=5)
	{
		number2=digits/shift_decimal_point;
		number3=floor(number2);
		cout<<number3<<"   ";
		digits=digits-number3*shift_decimal_point;
		shift_decimal_point=shift_decimal_point/10;
		counter=counter+1;
	}

	
	cout<< "\nThanks and Goodbye"<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
	
