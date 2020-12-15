#ifndef ESPACIO_H
#define ESPACIO_H

#include <iostream>
#include <string>
using namespace std;

class EspacioNat{
private:
	string _nombre,_provincia,_logros;
	int _maxSenderos;
public:

	//constructor vacío
		EspacioNat()
		{
			_nombre = "";
			_provincia = "";
			_logros = "";
			_maxSenderos= 4;
		}

		//constructor parametrizado
		EspacioNat(string nombre, string provincia, string logros)
		{
			_nombre = nombre;
			_provincia = provincia;
			_logros = logros;
			_maxSenderos = 4;
		}

		//Constructor de copia
		EspacioNat(const EspacioNat &m)
		{
			this->_nombre = m.getNombreEspNat();
			this->_provincia = m.getProvincia();
			this->_logros = m.getLogros();
			this->_maxSenderos= 4;
		}
//	Setters
    inline void setNombreEspNat(string nombre){_nombre = nombre;}
    inline void setProvincia(string provincia){_provincia = provincia;}
    inline void setLogros(string logros){_logros = logros;}
//	Getters
    inline string getNombreEspNat()const{return _nombre;}
    inline string getProvincia()const{return _provincia;}
    inline string getLogros()const{return _logros;}
};

void registrarEspacioNat(string nombreFichero);
void mostrarEspacioNat(string nombreFichero);

#endif