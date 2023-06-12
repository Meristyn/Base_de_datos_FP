#include "Inventario.h"
#include <fstream>
#include <sstream>

Inventario::Inventario()
{
    cargarProductos();
    capacidadProductos = 50;
    numProductos = 0;
    productos = new Producto[capacidadProductos];
}

Inventario::~Inventario()
{
    delete[] productos;
}

void Inventario::agregarProducto(Producto producto)
{
    if (numProductos < capacidadProductos)
    {
        productos[numProductos] = producto;
        numProductos++;
        guardarProductos();
    }
    else
    {
        std::cout << "Inventario lleno.\n";
    }
}

void Inventario::mostrarProductosPorTipo(std::string tipo)
{
    std::cout << "Productos de tipo '" << tipo << "':" << std::endl;
    for (int i = 0; i < numProductos; i++)
    {
        if (productos[i].getTipo() == tipo)
        {
            std::cout << "- " << productos[i].getNombre() << std::endl;
        }

    }
}

void Inventario::guardarProductos() 
{
    std::ofstream archivo("productos.txt");
    if (!archivo) 
    {
        std::cout << "No se pudo abrir el archivo de productos.\n";
        return;
    }

    for (int i = 0; i < numProductos; i++) 
    {
        archivo << productos[i].getNombre() << '\t'
                << productos[i].getTipo() << '\t'
                << productos[i].getPrecio() << '\n';
    }
    archivo.close();
}

void Inventario::cargarProductos() 
{
    std::ifstream archivo("productos.txt");
    if (!archivo) 
    {
        std::cout << "No se pudo abrir el archivo de productos.\n";
        return;
    }

    std::string linea;
    while (std::getline(archivo, linea)) 
    {
        std::stringstream ss(linea);
        std::string nombre;
        std::string tipo;
        std::string precioStr;
        double precio;

        std::getline(ss, nombre, '\t');
        std::getline(ss, tipo, '\t');
        std::getline(ss, precioStr, '\n');
        precio = std::stod(precioStr);

        if (numProductos < capacidadProductos)
        {
            Producto producto(nombre, tipo, precio);
            productos[numProductos] = producto;
            numProductos++;
        }
        else
        {
            std::cout << "Inventario lleno. No se puede cargar mas productos.k\n";
            break;
        }
    }
    archivo.close();
}

void Inventario::mostrarTiposDeProductos()
{
    std::string* TiposDeProductos = new std::string[numProductos];
    int numtipos = 0;

    for (int i = 0; i < numProductos; i++)
    {
        bool duplicado = false;
        for (int m = 0; m < numtipos; m++)
        {
            if (productos[i].getTipo() == TiposDeProductos[m])
            {
                duplicado = true;
                break;
            }
        }
        if (!duplicado)
        {
            TiposDeProductos[numtipos] = productos[i].getTipo();
            numtipos++;
        }
    }

    std::cout << "Tipos de productos disponibles:\n" << std::endl;
    for (int i = 0; i < numtipos; i++)
    {
        std::cout << "- " << TiposDeProductos[i] << std::endl;
    }

    delete[] TiposDeProductos; // Liberar la memoria asignada al arreglo dinámico
}

