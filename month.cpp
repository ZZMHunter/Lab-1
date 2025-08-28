/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tony Yi
Assignment: Lab 1

Task D: Finds the number of days in a given month
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    int month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    if (month == 2){
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            cout << 28 << " days" << endl;
        } else {
            cout << 29 << " days" << endl;
        }
    } else if (month % 2 == 0){
        cout << 30 << " days" << endl;
    } else {
        cout << 31 << " days" << endl;
    }
    return 0;
}