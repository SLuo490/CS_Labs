/*
Name: Shi Tao Luo
Course: CSCI-136
Instructor: Professor Maryash
Assignment: Lab 1: C

This program ask the user for the year, and would print whether the year is a common year
or a leap year

*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    
    cout << "Enter year: ";
    cin >> year;
    
    if (year % 4 != 0){
        cout << "Common year" << endl;
    }
    else if (year % 100 != 0){
        cout << "Leap year" << endl;
    }
    else if (year % 400 != 0){
        cout << "Common year" << endl;
    }
    else{
        cout << "Leap year" << endl;
    }
    return 0;
}
