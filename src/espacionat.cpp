#include "espacionat.hpp"

void registrarEspacioNat(string nombreFichero){
    EspacioNat aux;
    string nombre;
    string provincia;
    string logros;

    cout << "Introduce el nombre del Espacio Natural: " << endl;
    cin >> nombre;
    aux.setNombreEspNat(nombre);

    cout << "Introduce el nombre del Espacio Natural: " << endl;
    cin >> provincia;
    aux.setNombreEspNat(provincia);

    cout << "Introduce los logros del Espacio Natural: " << endl;
    cin >> logros;
    aux.setNombreEspNat(logros);


    ifstream archivo(nombreFichero);
	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de admin.txt"<<endl;
	}

}