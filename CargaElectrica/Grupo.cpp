//
// Created by elena on 04/11/2021.
//

#include "Grupo.h"

Grupo::Grupo() {
    nombre = " ";
    pka = 0;
    carga = 0;
}

Grupo::Grupo(string nombreGrupo, float pkGrupo, int cargaGrupo) {
    nombre = nombreGrupo;
    pka = pkGrupo;
    carga = cargaGrupo;
}

// esta función regresa el valor de la carga de cada uno de los grupos de la molecula
int Grupo::GetCarga() {
    return carga;
}

// esta función regresa el valor de pka de cada uno de los grupos de la molecula
float Grupo::GetpK() {
    return pka;
}
