/*
 * Author: Elena Almanza García
 * elena.almg@gmail.com
 * Sep 14, 2021
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float num1, num2;
    char operation;

    cout << "Welcome!" << endl;

    cout << "This calculator compute basic operations between two numbers" << endl;

    cout << "Enter the fist number" << endl;
    cin >> num1;

    cout << "Enter the operation: sum(+), rest(-), multiplication(*), division(/), remainder(%)" << endl;
    cin >> operation;

    if (operation == '+') {
        cout << "Enter the second number" << endl;
        cin >> num2;
        cout << "result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else {
        if (operation == '-') {
            cout << "Enter the second number" << endl;
            cin >> num2;
            cout << "result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        }
        else {
            if (operation == '*') {
                cout << "Enter the second number" << endl;
                cin >> num2;
                cout << "result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            }
            else {
                if (operation == '/') {
                    cout << "Enter the second number" << endl;
                    cin >> num2;
                    cout << "result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                }
                else {
                    if (operation == '%') {
                        cout << "Enter the second number" << endl;
                        cin >> num2;
                        cout << "result: " << num1 << " % " << num2 << " = " << fmod(num1, num2) << endl;
                    }
                    else {
                        cout << "Error: operation not valid" << endl;

                    }

                }

            }

        }

    }

    return 0;
}