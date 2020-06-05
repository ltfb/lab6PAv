#ifndef DTCLIENTE
#define DTCLIENTE

#include "DtDireccion.h"

#include<iostream>
using namespace std;

class DtCliente{
	private:
        string nombre;
        string telefono;
        DtDireccion direccion;
	public:
		DtCliente();
		DtCliente(string, string, DtDireccion);
		string getNombre();
        string getTelefono();
        DtDireccion getDireccion();

		~DtCliente();
};
#endif
