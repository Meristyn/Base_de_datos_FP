#include "Ventas.h"

Ventas::Ventas(const std::string fecha, double total)
{
	this->fecha = fecha;
	this->total = total;
}

std::string Ventas::getFecha()
{
	return fecha;
}

double Ventas::getTotal()
{
	return total;
}

void Ventas::print()
{
	std::cout << "Fecha de venta: " << fecha << std::endl;
    std::cout << "Total de venta: " << total << std::endl;
}
