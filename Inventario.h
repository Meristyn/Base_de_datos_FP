#include "Producto.h"

class Inventario
{
private:
    int numProductos;
    int capacidadProductos;
    Producto* productos;

public:
    Inventario();
    ~Inventario();
    void agregarProducto(Producto producto);
    void mostrarProductosPorTipo(std::string tipo);
    void guardarProductos();
    void cargarProductos();
    void mostrarTiposDeProductos();
};
