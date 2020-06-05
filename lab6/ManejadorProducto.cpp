#include "Producto.h"
#include <list>
#include "ManejadorProducto.h"
using namespace std;

ManejadorProducto* ManejadorProducto::instancia = NULL;

ManejadorProducto::ManejadorProducto(){}

ManejadorProducto* ManejadorProducto::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorProducto();
    return instancia;
}

list<Producto*> ManejadorProducto::getProductos(){
    list<Producto*> lstProductos;
    for (map<string,Producto*>::iterator it=this->productos.begin(); it!=productos.end(); ++it)
        lstProductos.push_back(it->second);
    return lstProductos;
}

Producto* ManejadorProducto::buscarProducto(string producto){
  map<string,Producto*>::iterator it = this->productos.find(producto);
  return it->second;
}

void ManejadorProducto::agregarProducto(Producto* producto){
    productos.insert(std::pair<string,Producto*>(producto->getCodigo(),producto));
}

bool ManejadorProducto::existeProducto(string producto){ 
  map<string,Producto*>::iterator it = this->productos.find(producto);
  return (it != this->productos.end());
}

void ManejadorProducto::eliminarProducto(string producto){
  map<string,Producto*>::iterator it = this->productos.find(producto);
  this->productos.erase(it);
}

ManejadorProducto::~ManejadorProducto(){}