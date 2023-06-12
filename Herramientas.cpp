#include "Herramientas.h"

Herramientas::Herramientas(const std::string& nombre, int cantidad)
{
	this->nombre = nombre;
	this->cantidad = cantidad;
}

std::string Herramientas::getNombre()
{
	return nombre;
}

int Herramientas::getCantidad()
{
	return cantidad;
}

void Herramientas::setNombre(std::string& nombre)
{
	this->nombre = nombre;
}

void Herramientas::setCantidad(int cantidad)
{
	this->cantidad = cantidad;
}

void Herramientas::print()
{
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Cantidad: " << cantidad << std::endl;
}
