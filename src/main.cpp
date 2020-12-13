#include <iostream>
#include <cstdlib>
#include "user.hpp"
#include "credenciales.hpp"
#include "espacionat.hpp"

using namespace std;

int main()
{
    int opcion;
    User aux;
    do {
        system("cls");        // Para limpiar la pantalla
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Ingresar como administrador" << endl;
        cout << "2. Ingresar como monitor" << endl;
        cout << "3. Salir" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opción 1
				cin >> aux;
                if (loginPass(aux, "admin.txt")){
                system("cls");
                mostrarMenuAdmin();
                }else{
                    cout << "Login incorrecto" << endl;
                }
				cin.ignore();
				cin.get();
				break;
            case 2:
                // Lista de instrucciones de la opción 2
				cin >> aux;
				 if (loginPass(aux, "monitor.txt")){
                system("cls");
                mostrarMenuMonitor();
                }else{
                    cout << "Login incorrecto" << endl;
                }
				cin.ignore();
				cin.get();
				break;
            case 3:
                // Lista de instrucciones de la opción 3
                 cout << "Esperemos que vuelvas pronto.." << endl;
                break;
        }
    } while (opcion != 3);
    return 0;
}
