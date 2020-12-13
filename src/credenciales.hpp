#ifndef credenciales_H
#define credenciales_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "espacionat.hpp"
#include "sendero.hpp"
#include "monitor.hpp"

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
    int opcion;
    do{
        system("cls");        // Para limpiar la pantalla
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones Admin" << endl;
        cout << "1. Registrar Espacio Natural" << endl;
        cout << "2. Mostrar EspacioNatural" << endl;
        cout << "3. Registrar Monitor" << endl;
        cout << "4. Mostrar monitores" << endl;
        cout << "5. Registrar Sendero" << endl;
        cout << "6. Mostrar senderos" << endl;
        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opción 1
                registrarEspacioNat("espacionat.txt");
				cin.ignore();
				cin.get();
				break;
            case 2:
                mostrarEspacioNat("espacionat.txt");
				cin.ignore();
				cin.get();
				break;
            case 3:
		string nombre, dni, ruta;
		int telefono;

		cout << "Introduza el nombre del monitor que desea registrar" << endl;
		cin >> nombre;
		cout << "Introduzca el dni del monitor" << endl;
		cin >> dni;
		cout << "Introduzca el teléfono del monitor" << endl;
		cin >> telefono;
		cout << "Introduzca la ruta que se le ha asociado al monitor" << endl;
		cin >> ruta;

		Monitor m;
		
		m.registrarMonitor(nombre, dni, telefono, ruta);
		
                break;
            case 4:
            
                break;
            case 5:
                registrarSendero("sendero.txt");
            	cin.ignore();
            	cin.get();
            	break;
             case 6:
                mostrarSendero("sendero.txt");
          		cin.ignore();
            	cin.get();
            	break;
            default:
            cout << "Marque una opción correcta" <<endl;
            break;
        }
    } while (opcion != 6);
}

void mostrarMenuMonitor(){
        cout << "\n\nMenu de Opciones Monitor" << endl;
        cout << "1. Programar Ruta" << endl;
        cout << "2. Registrar Ruta" << endl;
        cout << "3. Salir del Programa" << endl;
}
#endif
