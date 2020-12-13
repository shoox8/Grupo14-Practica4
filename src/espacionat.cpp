#include "espacionat.hpp"
#include <fstream>


void registrarEspacioNat(string nombreFichero){
    EspacioNat aux;
    string nombre;
    string provincia;
    string logros;

    cout << "Introduce el nombre del Espacio Natural: " << endl;
    cin >> nombre;
    aux.setNombreEspNat(nombre);

    cout << "Introduce la provincia del Espacio Natural: " << endl;
    cin >> provincia;
    aux.setNombreEspNat(provincia);

    cout << "Introduce los logros del Espacio Natural: " << endl;
    cin >> logros;
    aux.setNombreEspNat(logros);



    fstream archivo;
    archivo.open(nombreFichero,fstream::app);

	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de admin.txt"<<endl;
	}

    archivo<<nombre<<"\t"<<provincia<<"\t"<<logros<<endl;
    archivo.close();
}

void mostrarEspacioNat(string nombreFichero){
    ifstream archivo(nombreFichero);
	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de admin.txt"<<endl;
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
        archivo.ignore();
	}
	archivo.close(); //Cerramos el archivo.

}