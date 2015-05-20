/*
 *  Question1.cpp
 *
 *  Name: OBOT PATRICIA PETER
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: 45015352GA
 *
 *  Program that reads an integer and determines
 *  and prints whether it’s odd or even
 *
 *  Stub file to enable you complete assignment #1 - question #1
 */

#include <iostream>
using namespace std;

int main()
{
    // declare variable to hold integer value
    int value;
    
    // display welcome messages to user
    cout << "Welcome - This program reads an integer\n";
    cout << "and determines if it is odd or even\n\n";
    
    // TODO: Enter code to read integer and store in variable value
    cout << "Please enter an integer value -  ";
    cin>>value;
    
    // TODO: Enter code to determine if integer is odd or even
       int myBoolValue=value%2;      //Test to see if value is divisible by 2. this happens when myBoolValue=1
    if(myBoolValue==0)
    {
		cout<<" The number is even"<<endl;
    }
	else cout<<"The number is odd"<<endl;
    
    cout << "\nThanks and Goodbye";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
