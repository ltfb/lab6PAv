#ifndef PRODUCTO
#define PRODUCTO

#define CANT_COMUNES 100
#define CANT_MENU 20

#include <iostream>

using namespace std;

class Producto{
	private:
		string codigo;
		string descripcion;
        float precio;
	public:
		Producto();
		Producto(string,string,float);
		
		string getCodigo();
		void setCodigo(string codigo);
        
        string getDescripcion();
		void setDescripicion(string descripcion);

        float getPrecio();
		void setPrecio(float precio);
        ~Producto();
};

class Comun : public Producto{
};

class Menu : public Producto{
	private:
		Comun* comunes[CANT_COMUNES];
		int topeComunes;
	public:
	void agregarComunes(Comun*);
		Comun** obtenerComunes();
		int getTopeComunes();
};

#endif