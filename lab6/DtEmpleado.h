#ifndef DTEMPLEADO
#define DTEMPLEADO

#include "MedioTransporte.h"

#include<iostream>
using namespace std;

class DtEmpleado{
	private:
        string idEmpleado;
        string nombre;
	public:
		DtEmpleado();
		DtEmpleado(string, string);
		string getID();
        string getNombre();

		~DtEmpleado();
};

class Mozo: public DtEmpleado{
};


class Repartidor: public DtEmpleado{
    MedioTransporte medioTransporte;
};

#endif
