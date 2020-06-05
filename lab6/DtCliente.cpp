#include "DtCliente.h"
#include "DtDireccion.h"

DtCliente::DtCliente(){}
DtCliente::DtCliente(string nombre, string telefono, DtDireccion direccion){
    this->nombre=nombre;
    this->telefono=telefono;
    this->direccion=direccion;
}

string DtCliente::getNombre(){
    return this->nombre;
}

string DtCliente::getTelefono(){
    return this->telefono;
}

DtDireccion DtCliente::getDireccion(){
    return this->direccion;
}

DtCliente::~DtCliente(){}

