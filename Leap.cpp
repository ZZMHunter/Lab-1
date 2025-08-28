/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tony Yi
Assignment: Lab 1

Task C: Finds whether a year is a leap year
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << year << " C.E. is a leap year" << endl;
    } else {
        cout << year << " C.E. is a common year" << endl;
    }
}