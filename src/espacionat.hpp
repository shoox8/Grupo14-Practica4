#ifndef ESPACIO_H
#define ESPACIO_H

#include <iostream>
#include <string>
using namespace std;

class EspacioNat{
private:
	string nombre_,provincia_,logros_;
public:

	//constructor vacío
		EspacioNat()
		{
			_nombre = "";
			_provincia = "";
			_logros = "";
		}

		//constructor parametrizado
		EspacioNat(string nombre, string provincia, string logros)
		{
			_nombre = nombre;
			_provincia = provincia;
			_logros = logros;
		}

		//Constructor de copia
		EspacioNat(const EspacioNat &m)
		{
			this->_nombre = m._nombre;
			this->_provincia = m._provincia;
			this->_logros = m._logros;
		}
//	Setters
    inline void setNombreEspNat(string nombre){nombre_ = nombre;}
    inline void setProvincia(string provincia){provincia_ = provincia;}
    inline void setLogros(string logros){logros_ = logros;}
//	Getters
    inline string getNombreEspNat()const{return nombre_;}
    inline string getProvincia()const{return provincia_;}
    inline string getLogros()const{return logros_;}
};




#endif