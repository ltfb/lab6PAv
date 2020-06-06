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

class DtApartamento: public DtDireccion{ //Está bien?
    private:
        string nomEdificio;
        int nroApartamento;
    
    public:
        DtApartamento(string, int);
        string getNomEdificio();
        int getNroApartamento();

        ~DtApartamento();
};


#endif