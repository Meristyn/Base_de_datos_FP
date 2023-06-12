#include "Persona.h"

Persona::Persona(int DNI, std::string nombres, std::string apellidos, int numero, std::string direccion, std::string correo)
{
	this->DNI = DNI;
	this->nombres = nombres;
	this->apellidos = apellidos;
	this->numero = numero;
	this->direccion = direccion;
	this->correo = correo;
}

void Persona::setDNI(int DNI)
{
	this->DNI = DNI;
}

void Persona::setNombres(std::string nombres)
{
	this->nombres = nombres;
}

void Persona::setApellidos(std::string apellidos)
{
	this->apellidos = apellidos;
}

void Persona::setNumero(int numero)
{
	this->numero = numero;
}

void Persona::setDireccion(std::string direccion)
{
	this->direccion = direccion;
}

void Persona::setCorreo(std::string correo)
{
	this->correo = correo;
}

int Persona::getDNI()
{
	return DNI;
}

std::string Persona::getNombres()
{
	return nombres;
}

std::string Persona::getApellidos()
{
	return apellidos;
}

int Persona::getNumero()
{
	return numero;
}

std::string Persona::getDireccion()
{
	return direccion;
}

std::string Persona::getCorreo()
{
	return correo;
}

void Persona::print() {
	std::cout << "DNI: " << DNI << std::endl;
	std::cout << "Nombres: " << nombres << std::endl;
	std::cout << "Apellidos: " << apellidos << std::endl;
	std::cout << "Numero: " << numero << std::endl;
	std::cout << "Direccion: " << direccion << std::endl;
	std::cout << "Correo electronico: " << correo << std::endl;
}
