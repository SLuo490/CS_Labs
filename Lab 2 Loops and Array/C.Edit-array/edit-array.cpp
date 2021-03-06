/*
  Name: Shi Tao Luo
  course: csci-13600
  Instructio: Maryash
  Assignment: Lab2: C
  
 This program create a array of 10 integers, then ask the user for index and value which would change the array.
  */
 

#include <iostream>

using namespace std;

int main()
{
    int mydata [10];
    const int SIZE = 10;
    int index;
    int value;
    
    for (int i = 0; i < SIZE; i++)    //creates an array of 10 cells with each cell storing number 1
    {
        mydata[i] = 1;
        cout << mydata[i] << " ";
    }
    cout << endl;
    do {
        cout << "Input Index: ";            //asks the user for index and value
        cin >> index;
        cout << "Input value: ";
        cin >> value;
        if (index >= 0 && index < 10)      //this updates the cell with the user's index and value
        {
            mydata[index] = value;
            cout << endl;
        }
        else
        {
            return 0;                       //stops the cell if the index the user input is less                                than 0 and greather than or equal to 10
        }
        for (int i = 0; i < size; i++)     //this prints the updated cell
        {
            cout << mydata[i] << " ";
        }
        cout << endl;
    }
    while (index >= 0 || index < 10);
    return 0;
}

