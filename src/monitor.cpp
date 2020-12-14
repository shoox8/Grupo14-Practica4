#include "monitor.hpp"
#include <fstream>
void Monitor::mostrarMonitor()
{	

	ifstream archivo("monitor.txt");
	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de monitor.txt"<<endl;
	}

	string nombre;
	string pass;
	string dni;
	int telefono;
	string ruta;

    cout<< "| Nombre | \t | Pass | \t | Dni | \t | Telefono | \t | Ruta |" <<endl;
    while (!archivo.eof()) {
		archivo>>nombre;
		archivo>>pass;
		archivo>>dni;
        archivo>>telefono;
        archivo>>ruta;
		cout << "|" <<nombre << "| \t |" <<pass << "| \t |" << dni << "| \t |" << telefono << "| \t |" << ruta << "|"<< endl;
        archivo.ignore();
	}
	archivo.close(); //Cerramos el archivo.
}

void Monitor::registrarMonitor(string nombreFichero)
{

    Monitor aux;
    string nombre;
    string pass;
    string dni;
    int telefono;
    string ruta;

    cout << "Introduce el nombre del monitor: " << endl;
    cin >> nombre;

    cout << "Introduce el password del monitor: " << endl;
    cin >> pass;

    cout << "Introduce el dni del mostrarMonitor: " << endl;
    cin >> dni;

    cout << "Introduce el telefono del monitor: " << endl;
    cin >> telefono;

    cout << "Introduce la ruta del monitor: " << endl;
    cin >> ruta;



    fstream archivo;
    archivo.open(nombreFichero,fstream::app);

	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de monitor.txt"<<endl;
	}

    archivo<<nombre<<"\t"<<pass<<"\t"<<dni<<"\t"<<telefono<<"\t"<<ruta<<endl;
    archivo.close();
}
