#include <iostream>
#include <string>

class Ventas
{
private:
	std::string fecha;
	double total;

public:
	Ventas(std::string fecha, double total);
	std::string getFecha();
	double getTotal();
	void print();
};