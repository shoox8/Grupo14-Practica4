#ifndef credenciales_H
#define credenciales_H
#include <iostream>
#include <cstdlib>
#include <fstream>

bool loginPass(User aux, string nombreFichero){

	ifstream archivo(nombreFichero);
	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de admin.txt"<<endl;
	}

	string userF;
	string passF;


    while (!archivo.eof()) {
		archivo>>userF;
		archivo>>passF;
		if(aux.getUsername()==userF){
			if(aux.getPassword()==passF){
				return true;
			}
			else
			{
				return false;
			}
		}
        archivo.ignore();
	}
	archivo.close(); //Cerramos el archivo.

    return false;
}

void mostrarMenuAdmin(){
        cout << "\n\nMenu de Opciones Admin" << endl;
        cout << "1. Registrar Espacio Natural" << endl;
        cout << "2. Registrar Espacio Natural" << endl;
        cout << "3. Registrar Monitor" << endl;
        cout << "4. Salir del programa" << endl;
}

void mostrarMenuMonitor(){
        cout << "\n\nMenu de Opciones Monitor" << endl;
        cout << "1. Programar Ruta" << endl;
        cout << "2. Registrar Ruta" << endl;
        cout << "3. Salir del Programa" << endl;
}
#endif
