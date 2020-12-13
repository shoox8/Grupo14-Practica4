#include "monitor.hpp"
#include <fstream>
void Monitor::mostrarMonitor()
{	
	ifstream f;
	string datoFich;
	f.open("monitor.txt");
	if(!f)
		cout << "Error al abrir el fichero monitor" << endl;
	else
	{
		datoFich = f.get();
		while (!f.eof())
		{
			cout << datoFich << endl;
			datoFich = f.get();
		}
		f.close();
	}

	/*cout << "Nombre" << _nombre << endl;
	cout << "DNI: " << _dni << endl;
	cout << "Telefono: " << _telefono << endl;
	cout << "ruta: " << _ruta << endl;*/
}

void registrarMonitor(string nombre, string dni, int telefono, string ruta)
{
	cout << "Introduza el nombre del monitor que desea registrar" << endl;
	cin >> nombre;
	cout << "Introduzca el dni del monitor" << endl;
	cin >> dni;
	cout << "Introduzca el teléfono del monitor" << endl;
	cin >> telefono;
	cout << "Introduzca la ruta que se le ha asociado al monitor" << endl;
	cin >> ruta;

	ofstream f;
	f.open("monitor.txt");
	if(!f)
		cout << "Error al abrir fichero monitor" << endl;
	else
	{
		f << nombre << " " << dni << " " << telefono << " " << ruta << endl;
		f.close();
	}
}
