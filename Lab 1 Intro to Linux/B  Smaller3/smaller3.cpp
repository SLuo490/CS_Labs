/*
Name: Shi Tao Luo
Course: CSCI-136
Instructor: Professor Maryash
Assignment: Lab 1: B
 
This program ask the user for their three numbers, and would print the smallest
number
*/

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    
    num4 = min(num1, num2);
    
    cout << "The smallest number is: " << min(num3, num4) << endl;
    return 0;
}

