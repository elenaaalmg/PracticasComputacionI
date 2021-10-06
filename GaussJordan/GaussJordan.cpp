/*
 * Author: Elena Almanza García
 * elena.almg@gmail.com
 * Oct 23, 2021
 */

#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);

template <typename matriz>
void Pivote(matriz & miMatriz);

const int variables = 3;
const int columnas = variables + 1;


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solución para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array <float, columnas>, variables> miMatriz = { 0 };


    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);


    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz){
    for (int i = 0; i < variables; i++){
        float mayor = miMatriz[i][i];
        int indice = i;
        for(int i2 = i + 1; i2 < variables; i2++){
            if(mayor < miMatriz[i2][i]){
                mayor = miMatriz[i2][i];
                indice = i2;
            }
        }
        if(i != indice){
            for(int j = 0; j < columnas; j++){
                float filaAux = miMatriz[i][j];
                miMatriz[i][j] = miMatriz[indice][j];
                miMatriz[indice][j] = filaAux;
            }
        }
        if(miMatriz[i][i] == 0){
            cout << "El sistema no tiene solucion" << endl;
            ImprimirMatriz(miMatriz);
        }
        else{
            for(int k = 0; k < variables; k++){
                if (k != i){
                    float multiplo = -miMatriz[k][i];
                    for(int l = i; l < columnas; l++){
                        miMatriz[k][l] = miMatriz[k][l] + multiplo*miMatriz[i][l] / miMatriz[i][i];
                    }
                }
                else{
                    float pivote = miMatriz[i][i];
                    for(int l = i; l < variables + 1; l++){
                        miMatriz[k][l] = miMatriz[k][l] / pivote;
                    }
                }
            }
        }
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    int variables = miMatriz.size();
    cout << "Solución:" << endl;
    for (int i = 0; i < variables; i++) {
        cout << "x" << i << "=" << miMatriz[i][columnas-1] << '\t';
        cout << "\n";
    }
}