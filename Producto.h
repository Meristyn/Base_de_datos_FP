#include <iostream>
#include <string>

class Producto 
{
private:
    std::string nombre;
    std::string tipo;
    double precio;

public:
    Producto();
    Producto(std::string, std::string, double);
    void print();
    void setPrecio(double);
    std::string getNombre();
    std::string getTipo();
    double getPrecio();
};
