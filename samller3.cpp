/*
Author: Zhao Zhang
Course: CSCI-135
Instructor: Tony Yi
Assignment: Lab 1

Task B: Find the smaller of 3 integers
*/

#include <iostream>

using namespace std;
int main() {
    int a;
    int b;
    int c;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    cout << "Enter the third integer: ";
    cin >> c;
    if (a < b) {
        if (a < c){ 
            cout << a << " is smaller" << endl;
        } else if (c < a) {
            cout << c << " is smaller" << endl;
        } else {
            cout << "They are all same" << endl;
        }
    } else if (b < a) {
        if (b < c) {
            cout << b << " is smaller" << endl;
        } else if (c < b) {
            cout << c << " is smaller" << endl;
        } else {
            cout << "They are all same" << endl;
        }
    }
    return 0;
}