#include "monitor.hpp"

void Monitor::mostrarMonitor()
{
	cout << "Nombre" << _nombre << endl;
	cout << "DNI: " << _dni << endl;
	cout << "Telefono: " << _telefono << endl;
	cout << "ruta: " << _ruta << endl;
}

void registrarMonitor(string nombre, string dni, int telefono, string ruta)
{
	cout << "Introduza el nombre del monitor que desea registrar" << endl;
	cin >> _nombre;
	cout << "Introduzca el dni del monitor" << endl;
	cin >> _dni;
	cout << "Introduzca el teléfono del monitor" << endl;
	cin >> _telefono;
	cout << "Introduzca la ruta que se le ha asociado al monitor" << endl;
	cin >> _ruta;
}