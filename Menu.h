
#include "Inventario.h"

class Menu 
{
    private:
        Inventario inventario;
        void printMenu();
    public:
        void run();
        void identificacion_alumno(std::string, std::string);
};