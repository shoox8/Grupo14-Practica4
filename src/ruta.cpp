#include "ruta.hpp"
#include <fstream>

void RegistrarRuta(string nFichero){

    string nombre, tipo, direccion, localidad;
    int id_ruta, estado, duracion;
    float longitud;

    cout<<"Introduce el nombre de la Ruta: ";
    cin>>nombre;

    cout<<"Introduce el tipo de la Ruta: ";
    cin>>tipo;

    cout<<"Introduce la direccion de la Ruta: ";
    cin>>direccion;

    cout<<"Introduce la localidad de la Ruta: ";
    cin>>localidad;

    cout<<"Introduce la id de la Ruta: ";
    cin>>id_ruta;

    cout<<"Introduce el estado de la Ruta: ";
    cin>>estado;
    
    cout<<"Introduce la duracion de la Ruta: ";
    cin>>duracion;
    
    cout<<"Introduce la longitud de la Ruta: ";
    cin>>longitud;

    fstream archivo;
    archivo.open(nFichero, fstream::app);
    if(!archivo.is_open()){
        cout<<"Error al abrir el fichero ruta.txt";
    }
    archivo<<nombre<<"\t"<<tipo<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<id_ruta<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud<<endl;
    archivo.close();
}

void MostrarRuta(string nFichero){
    ifstream archivo(nFichero);
    if(!archivo.is_open()){
        cout<<"Error al abrir el fichero ruta.txt"<<endl;
    }
    string nombre, tipo, direccion, localidad;
    int id_ruta, estado, duracion;
    float longitud;

    while(!archivo.eof()){
        archivo>>nombre;
        archivo>>tipo;
        archivo>>direccion;
        archivo>>localidad;
        archivo>>id_ruta;
        archivo>>estado;
        archivo>>duracion;
        archivo>>longitud;

        cout<<nombre<<"\t"<<tipo<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<id_ruta<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud<<endl;
        archivo.ignore();
    }
    archivo.close();
}