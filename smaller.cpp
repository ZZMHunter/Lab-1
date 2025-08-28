/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tony Yi
Assignment: Lab 1

Task A: Find the smaller of 2 integers
*/

#include <iostream>

using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    // takes inputs a for the first integer, and b for the second integer
    if (a < b)
    {
        cout << a << " is smaller" << endl;
    }
    else if (b < a)
    {
        cout << b << " is smaller" << endl;
    }
    else
    {
        cout << "They are the same" << endl;
    }
    // compares int a to int b and prints whichever one is smaller, in addition if they are equal print that they are the same
    return 0;
}