#include <iostream>
#include <string>

class Compras
{
private:
	std::string fecha;
	double total;

public:
	Compras(std::string fecha, double total);
	std::string getFecha();
	double getTotal();
	void print();
};