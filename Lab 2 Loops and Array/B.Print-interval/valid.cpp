/*
 Name: Shi Tao Luo
 course: csci-13600
 Instructio: Maryash
 Assignment: Lab2 A
 
This program print asks the user for a number between 0 and 100, then it would square the number
 */

#include <iostream>
using namespace std;



int main ()
{
    int num;
    
    cout << "Enter an integer: ";     // asks the user for a number
    cin >> num;
    
    while (num <= 0 || num >= 100)    //if number is less than 0 and greather than 100 the user is                                     prompted to reinter a integer
    {
        cout << "Re-enter a integer: ";
        cin >> num;
    }
    num = num * num;
    cout << "The number squared is: " << num << endl;   //print the integer squared 
    
    return 0;
}
