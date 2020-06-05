#ifndef MANEJADORPRODUCTO
#define MANEJADORPRODUCTO
#include "Producto.h"
#include <map>
#include <list>
#include <string>

using namespace std;

class ManejadorProducto{
    private:
        static ManejadorProducto* instancia;
        map<string,Producto*> productos;
        ManejadorProducto();
    public:
        static ManejadorProducto* getInstancia();
        list<Producto*> getProductos();
        Producto* buscarProducto(string);
        void agregarProducto(Producto*);
        bool existeProducto(string);
        void eliminarProducto(string);
        virtual ~ManejadorProducto();
};
#endif
