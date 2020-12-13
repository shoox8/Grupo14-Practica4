#include "sendero.hpp"
#include <fstream>


void registrarSendero(string nombreFichero){
    Sendero aux;
    string nombre;
    string espacionatural;
    int rutas;

    cout << "Introduce el nombre del Sendero: " << endl;
    cin >> nombre;

    cout << "Introduce el Espacio Natural donde se encuentre el Sendero: " << endl;
    cin >> espacionatural;

    cout << "Introduce el estado del Sendero: " << endl;
    cin >> estado;

    cout << "Introduce el numero de rutas que tiene el sendero: " << endl;
    cin >> r;


    fstream archivo;
    archivo.open(nombreFichero,fstream::app);

	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de sendero.txt"<<endl;
	}

    archivo<<nombre<<"\t"<<espacionatural<<"\t"<<rutas<<endl;
    archivo.close();
}

void mostrarSendero(string nombreFichero){
    ifstream archivo(nombreFichero);
	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de sendero.txt"<<endl;
	}

	string nombre;
	string espacionatural;
	string sendero;
    int rutas;

    	cout<< "| Nombre | \t | EspacioNatural | \t | Sendero | \t | Rutas |" <<endl;
    while (!archivo.eof()) {
		archivo>>nombre;
		archivo>>espacionatural;
		archivo>>sendero;
        archivo>>rutas;
		cout << "|" <<nombre << "| \t |" << espacionatural << "| \t |" << estado << "| \t |"<< rutas << " |" <<endl;
        archivo.ignore();
	}
	archivo.close(); //Cerramos el archivo.

}
