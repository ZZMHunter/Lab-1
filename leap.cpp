/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tony Yi
Assignment: Lab 1

Task C: Finds whether a year is a leap year
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    // takes input year
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << year << " C.E. is a leap year" << endl;
    }
    else
    {
        cout << year << " C.E. is a common year" << endl;
    }
    // checks for requirements for a year to be considered a leap year and prints whether or not it is a leap year
    return 0;
}
