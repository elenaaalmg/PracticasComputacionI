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

int Grupo::GetCarga() {
    return carga;
}

float Grupo::GetpK() {
    return pka;
}
