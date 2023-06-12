#include <iostream>
#include <string>

class Persona
{
private:
	int DNI;
	std::string nombres;
	std::string apellidos;
	int numero;
	std::string direccion;
	std::string correo;

public:
	Persona(int DNI, std::string nombres, std::string apellidos, int numero, std::string direccion, std::string correo);

	void setDNI(int DNI);
	void setNombres(std::string nombres);
	void setApellidos(std::string apellidos);
	void setNumero(int numero);
	void setDireccion(std::string direccion);
	void setCorreo(std::string correo);

	int getDNI();
	std::string getNombres();
	std::string getApellidos();
	int getNumero();
	std::string getDireccion();
	std::string getCorreo();

	void print();
};
