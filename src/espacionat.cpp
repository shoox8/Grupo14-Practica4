#include "espacionat.hpp"
#include <fstream>


void registrarEspacioNat(string nombreFichero){

    string nombre;
    string provincia;
    string logros;

    cout << "Introduce el nombre del Espacio Natural: " << endl;
    cin >> nombre;


    cout << "Introduce la provincia del Espacio Natural: " << endl;
    cin >> provincia;

    cout << "Introduce los logros del Espacio Natural: " << endl;
    cin >> logros;




    fstream archivo;
    archivo.open(nombreFichero,fstream::app);

	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de espacionat.txt"<<endl;
	}

    archivo<< endl <<nombre<<"\t"<<provincia<<"\t"<<logros;
    archivo.close();
}

void mostrarEspacioNat(string nombreFichero){
    ifstream archivo(nombreFichero);
	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de espacionat.txt"<<endl;
	}

	string nombre;
	string provincia;
    string logros;

    cout<< "| Nombre | \t | Provincia | \t | Logros |" <<endl;
    while (!archivo.eof()) {
		archivo>>nombre;
		archivo>>provincia;
        archivo>>logros;

		cout << "|" <<nombre << "| \t |" << provincia << "| \t |" << logros << "|"<< endl;

	}
	archivo.close(); //Cerramos el archivo.

}