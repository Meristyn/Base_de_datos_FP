#include "Producto.h"

Producto::Producto()
{
    nombre = "";
    tipo = "";
    precio = 0.0;
}

Producto::Producto(std::string nombre, std::string tipo, double precio) 
{
    this->nombre = nombre;
    this->tipo = tipo;
    this->precio = precio;
}

void Producto::print() 
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Precio: " << precio << std::endl;
}

void Producto::setPrecio(double precio) 
{
    this->precio = precio;
}

std::string Producto::getNombre() 
{
    return nombre;
}

std::string Producto::getTipo() 
{
    return tipo;
}

double Producto::getPrecio() 
{
    return precio;
}
