#ifndef SENDERO_H
#define SENDERO_H
#include <iostream>
#include <string>
using namespace std;

class Sendero{
	private:
		string nombre_, espacionatural_, estado_;
		int  rutas_;
	public:
		//constructor vacio
			Sendero(){
				nombre_="";
				espacionatural_="";
				estado_="";
				rutas_= 0;
			}


		//constructor parametrizado
			Sendero(string nombre, string espacionatural, string estado, int rutas){
				nombre_=nombre;
				espacionatural_=espacionatural;
				estado_=estado;
				rutas_=rutas;
			}

		//constructor de copia
			Sendero(const Sendero &m){
				this->nombre_=m.nombre_;
				this->espacionatural_=m.espacionatural_;
				this->estado_=m.estado_;
				this->rutas_=m.rutas_;
			}

		//Setters
			inline void setNombreSendero(string nombre) {nombre_=nombre;}
			inline void setEspacioNatural(string espacionatural) {espacionatural_=espacionatural;}
			inline void setEstado(string estado) {estado_=estado;}
			inline void setRutasSendero(int rutas) {rutas_=rutas;}

		//Getters
			inline string getNombreSendero()const{return nombre_;}
		    inline string getEspacioNatural()const{return espacionatural_;}
		    inline string getEstado()const{return estado_;}
		    inline int getRutas()const{return rutas_;}

};

void registrarSendero(string nombreFichero);
void mostrarSendero(string nombreFichero);
bool isValidEspacioNat(string nombreFichero, string espacioNat);

#endif
