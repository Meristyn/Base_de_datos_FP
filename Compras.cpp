#include "Compras.h"

Compras::Compras(std::string fecha, double total)
{
	this->fecha = fecha;
	this->total = total;
}

std::string Compras::getFecha()
{
	return fecha;
}

double Compras::getTotal()
{
	return total;
}

void Compras::print()
{
	std::cout << "Fecha de compra: " << fecha << std::endl;
    std::cout << "Total de compra: " << total << std::endl;
}