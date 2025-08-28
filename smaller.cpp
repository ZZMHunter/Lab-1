/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tony Yi
Assignment: Lab 1

Task A: Find the smaller of 2 integers
*/

#include <iostream>

using namespace std;
int main() {
    int a;
    int b;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    if (a < b) {
        cout << a << " is smaller" << endl;
    } else if (b < a) {
        cout << b << " is smaller" << endl;
    } else {
        cout << "They are the same" << endl;
    }
    return 0;
}