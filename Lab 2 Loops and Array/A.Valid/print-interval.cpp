/*
 Name: Shi Tao Luo
 course: csci-13600
 Instructio: Maryash
 Assignment: Lab2: B
 
 
This program print asks the user for a lower limit number and a upper limit number. Then it would print the entire number sequence from the lower to the upper limit.
 */

#include <iostream>
using namespace std;



int main ()
{
    int lower;
    int upper;
    
    cout << "Enter the lower limit: ";    //ask the user for lower limit
    cin >> lower;
    
    cout << "Enter the upper limit: ";    //ask the user for upper limit
    cin >> upper;
    
    for (int i = lower; i < upper ; i++)   //uses for loop to print the number between the lower                                           and upper limit
    {
        cout << i << " ";
    }
    return 0;
}
