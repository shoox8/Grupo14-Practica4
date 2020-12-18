
#ifndef credenciales_H
#define credenciales_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "espacionat.hpp"
#include "sendero.hpp"
#include "monitor.hpp"
#include "ruta.hpp"


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
        cout << "7. Salir del programa" << endl;
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
	        Monitor m;
                m.pedirMonitor();
		m.registrarMonitor("monitor.txt");
                break;
            case 4:
			    m.mostrarMonitor();
                cin.ignore();
				cin.get();

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
    } while (opcion != 7);
}

void mostrarMenuMonitor(){
     int opcion;
     do{
        cout << "\n\nMenu de Opciones Monitor" << endl;
        cout << "1. Registrar Ruta" << endl;
        cout << "2. Mostrar Ruta" << endl;
        cout << "3. Mostrar Rutas en Mantenimiento" << endl;
        cout << "4. Salir del programa" <<endl;

        cout<<"\nIngrese una opcion";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            RegistrarRuta("ruta.txt");
            cin.ignore();
            cin.get();
            break;
        
        case 2:
            MostrarRuta("ruta.txt");
            cin.ignore();
            cin.get();
            break;
	
	case 3:
	    MostrarRutaMantenimiento("ruta.txt");
	    cin.ignore();
	    cin.get();
	    break;		
        
        default:
            cout<<"Marque una opcion correcta"<<endl;
            break;
        }
     }while(opcion!=3);
}
#endif
