#include "Menu.h"
#include <iomanip>
#include <limits>

void Menu::printMenu()
{
    std::cout << "----------------------------------------" << std::endl;
    std::cout << std::setw(21) << "Menu" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << std::left << std::setw(4) << "1." << std::setw(32) << "Agregar producto" << std::endl;
    std::cout << std::left << std::setw(4) << "2." << std::setw(32) << "Mostrar productos por tipo" << std::endl;
    std::cout << std::left << std::setw(4) << "3." << std::setw(32) << "Salir" << std::endl;
    std::cout << "----------------------------------------\n" << std::endl;
    std::cout << "Ingrese una opcion: ";
}

void Menu::identificacion_alumno(std::string tempname, std::string temptitle)
{
    std::system("cls");
    std::cout << "\x1B[H";

    std::cout << "\x1B[3;34m";
    std::cout << "/***************************************************/" << std::endl; 
    std::cout << "\x1B[m";
    std::cout << "Universidad Catolica San Pablo" << std::endl; 
    std::cout << "Escuela Profesional de Ciencia de la Computacion" << std::endl; 
    std::cout << "Curso de Ciencia de la Computacion I" << std::endl; 
    std::cout << "Prof. D.Sc. Manuel Eduardo Loaiza Fernandez" << std::endl;
    std::cout << tempname << std::endl; 
    std::cout << "Arequipa 2023 - I" << std::endl; 
    std::cout << "\x1B[3;34m";
    std::cout << "/***************************************************/" << std::endl;
    std::cout << "\x1B[m";
    std::cout << temptitle << std::endl;  
    
    std::cout<<"\x1B[m";
}

void Menu::run() 
{
    int opcion;

    while (true)
    {
        printMenu();
        std::cin >> opcion;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar caracteres restantes en el búfer de entrada

        if (opcion == 1) {
            std::string nombre, tipo, precioStr;
            double precio;

            std::cout << "Ingrese el nombre del producto: ";
            std::getline(std::cin, nombre);

            std::cout << "Ingrese el tipo de producto: ";
            std::getline(std::cin, tipo);

            std::cout << "Ingrese el precio del producto: ";
            std::getline(std::cin, precioStr);
            precio = std::stod(precioStr);

            Producto nuevoProducto(nombre, tipo, precio);
            inventario.agregarProducto(nuevoProducto);
        }

        else if (opcion == 2) {
            std::string tipo;
            inventario.mostrarTiposDeProductos();
            std::cout << "Ingrese el tipo de producto: ";
            std::cin >> tipo;
            inventario.mostrarProductosPorTipo(tipo);
        }
        else if (opcion == 3) {
            break;
        }
        else {
            std::cout << "Opcion no válida. Intente de nuevo.\n";
        }
    }
}