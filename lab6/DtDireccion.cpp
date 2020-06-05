#include "DtDireccion.h"

DtDireccion::DtDireccion(){}
DtDireccion::DtDireccion(string nomCalle, string entreCalle1, string entreCalle2, int nroPuerta){
    this->nomCalle=nomCalle;
    this->entreCalle1=entreCalle1;
    this->entreCalle2=entreCalle2;
    this->nroPuerta=nroPuerta;
}

string DtDireccion::getCalle(){
    return this->nomCalle;
}

string DtDireccion::getEntreCalle1(){
    return this->entreCalle1;
}

string DtDireccion::getEntreCalle2(){
    return this->entreCalle2;
}

int DtDireccion::getNroPuerta(){
    return this->nroPuerta;
}

DtDireccion::~DtDireccion(){}

