/*
Name: Shi Tao Luo
Course: CSCI-136
Instructor: Professor Maryash
Assignment: Lab 1: D
 
This program ask the user for the year and month, and would print the number of
days of the user's input month.
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    int month;
    
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    
    if (month == 1 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12 || month == 3)
    {
        cout << "31 days" << endl; // print "31 days" for the knuckle bump months
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "30 days" << endl;
    }
        else if (year % 100 == 0) // consider the leap year
        {
            if (year % 400 == 0)
            {
                cout << "29 days" << endl;
            }
            else
            {
                cout << "28 days" << endl;
            }
        }
        else if (year % 100 != 0)
        {
            if (year % 4 == 0)
            {
                cout << "29 days" <<endl;
            }
            else
            {
                cout << "28 days" <<endl;

            }
        }
    
    return 0;
}



