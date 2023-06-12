#include <iostream>
#include <string>

class Herramientas
{
private:
	std::string nombre;
	int cantidad;

public:
	Herramientas(const std::string& nombre, int cantidad);
	std::string getNombre();
	int getCantidad();
	void setNombre(std::string& nombre);
	void setCantidad(int cantidad);
	void print();
};
