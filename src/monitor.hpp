#ifndef monitor_H
#define monitor_H

#include <iostream>
#include <string>
using namespace std;

class Monitor
{
	private:

		string _nombre;

		string _pass;

		string _dni;

		int _telefono;

		string _ruta;

	public:

		//CONSTRUCTORES
		//constructor vacío
		Monitor()
		{
			_nombre = "";
			_pass = "";
			_dni = "";
			_telefono = 0;
			_ruta = "";
		}

		//constructor parametrizado
		Monitor(string nombre, string pass, string dni, int telefono, string ruta)
		{
			_nombre = nombre;
			_pass = pass;
			_dni = dni;
			_telefono = telefono;
			_ruta = ruta;
		}

		//Constructor de copia
		Monitor(const Monitor &m)
		{
			this->_nombre = m._nombre;
			this->_pass = m._pass;
			this->_dni = m._dni;
			this->_telefono = m._telefono;
			this->_ruta = m._ruta;
		}

		//OBSERVADORES
		inline string getNombre()const{return _nombre;}

		inline string getPass()const{return _pass;}

		inline string getDni()const{return _dni;}

		inline int getTelefono()const{return _telefono;}

		inline string getRuta()const{return _ruta;}

		//MODIFICADORES
		inline void setNombre(string nombre){_nombre = nombre;}

		inline void setPass(string pass){_nombre = pass;}

		inline void setDni(string dni){_dni = dni;}

		inline void setTelefono(int telefono){_telefono = telefono;}

		inline void setRuta(string ruta){_ruta = ruta;}

		//METODOS 

		void registrarMonitor(string nombreFichero);

		void mostrarMonitor();
		
		void pedirMonitor();

};

#endif
