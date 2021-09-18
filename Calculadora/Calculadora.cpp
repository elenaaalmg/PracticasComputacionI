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

       cout << "Este programa hace operaciones basicas entre dos numeros" << endl;

    cout << "Primer numero:" ;
    cin >> num1;

    cout << "Operacion:" ;
    cin >> operation;

    if (operation == '+') {
        cout << "Segundo numero:" ;
        cin >> num2;
        cout << "\nResultado: "<< endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else {
        if (operation == '-') {
            cout << "Segundo numero:" ;
            cin >> num2;
            cout << "\nResultado: "<< endl;
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        }
        else {
            if (operation == '*') {
                cout << "Segundo numero:" ;
                cin >> num2;
                cout << "\nResultado: "<< endl;
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            }
            else {
                if (operation == '/') {
                    cout << "Segundo numero:" ;
                    cin >> num2;
                    cout << "\nResultado: "<< endl;
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                }
                else {
                    if (operation == '%') {
                        cout << "Segundo numero:" ;
                        cin >> num2;
                        cout << "\nResultado: " << endl;
                        cout << num1 << " % " << num2 << " = " << fmod(num1, num2) << endl;
                    }
                    else {
                        cout << "Error: operacion no valida" << endl;

                    }

                }

            }

        }

    }

    return 0;
}