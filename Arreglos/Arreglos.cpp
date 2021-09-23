/*
 * Author: Elena Almanza
 * elena.almg@gmail.com
 * Sep 22, 2021
 */

#include <iostream>
#include <array>

#define LEN 3 //Número de elementos en los arreglos

using namespace std;

void ImprimirArreglo(array<float, LEN> arreglo);
array<float, LEN> LlenarArreglo(void);
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo);
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2);

int main()
{
    char decision;
    array<float, LEN> arr = { 0 };
    arr = LlenarArreglo(); // Solicitamos al usuario que llene un arreglo y lo asignamos a nuestro arreglo principal
    cout << "Operación:";
    cin >> decision;
    while (decision != '+' && decision != '*'){
        cout << "Operación:";
        cin >> decision;
    }

    if (decision == '*') {
        float factor;
        cout << "Factor:";
        cin >> factor;
        arr = MultiplicarArreglo(arr, factor); // Multiplicamos nuestro arreglo principal por el factor y el resultado lo asignamos a nuestro arreglo principal.
    }

    else if (decision == '+') {
        array<float, LEN> arr2 = {0};
        arr2 = LlenarArreglo();
        arr = SumarArreglos(arr, arr2); // Sumamos ambos arreglos elemento a elemento, y reasignamos el resutlado a nuestro arreglo principal
    }
    cout << "Resultado:";
    ImprimirArreglo(arr);
    return 0;
}

// Imprime los elementos del arreglo 'arreglo' separando cada elemento con un espacio en blanco
void ImprimirArreglo(array<float, LEN> arreglo){
    for (int i = 0; i < LEN; i++)
        cout << arreglo[i] << ' ';
    cout << '\n';
}

// Llena un arreglo de tamaño LEN y lo "regresa" como resultado
array<float, LEN> LlenarArreglo(){
    array < float, LEN > arreglo {0};
    for (int i = 0; i < LEN; ++i) {
        cout << "Valor elemento [" << i << "] :";
        cin >> arreglo[i];
    }
    return arreglo;
}

// Multiplica cada elemento del arreglo 'arreglo' por el factor 'multiplo'
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo){
    for (int i = 0; i < LEN; ++i) {
        arreglo[i] = arreglo [i] * multiplo;
    }
    return arreglo;
}

// Suma elemento a elemento los arreglos 'arr1' y 'arr2' y regresa el arreglo resultante
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2){
    for (int i = 0; i < LEN; ++i) {
        arr1[i] = arr1[i] + arr2 [i];
    }
    return arr1;
}

