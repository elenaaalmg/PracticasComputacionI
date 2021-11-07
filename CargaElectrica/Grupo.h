//
// Created by elena on 04/11/2021.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H

#include <string>

using namespace std;

class Grupo {
private:
    string nombre;
    float pka;
    int carga;

public:
    Grupo();
    Grupo(string, float, int); //definición de construcctor
    int GetCarga();
    float GetpK();

};


#endif //CARGAELECTRICA_GRUPO_H
