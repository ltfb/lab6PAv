#ifndef PRODUCTO
#define PRODUCTO

#define CANT_COMUNES 100
#define CANT_MENU 20

#include "DtCliente.h"

#include <iostream>

using namespace std;

class Venta{
	private:
		string codigo;
	public:
		Venta();
		Venta(string);
		
		string getCodigo();
		void setCodigo(string codigo);
        
        ~Venta();
};

class VentaDomicilio : public Venta{
	DtCliente datosCliente;
	//faltan cosas
};

class VentaLocal : public Venta{
	//faltan cosas
	//como hago lo del conjuto de mesas?
};

#endif