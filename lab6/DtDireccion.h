#ifndef DTDIRECCION
#define DTDIRECCION

#include<iostream>
using namespace std;

class DtDireccion{
	private:
        string nomCalle;
        string entreCalle1;
        string entreCalle2;
        int nroPuerta;

	public:
		DtDireccion();
		DtDireccion(string, string, string, int);
		string getCalle();
        string getEntreCalle1();
        string getEntreCalle2();
        int getNroPuerta();

		~DtDireccion();
};

class DtDepartamento: public DtDireccion{
    string nomEdificio;
    int nroApartamento;
};


#endif