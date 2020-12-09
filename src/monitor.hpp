#ifndef monitor_H
#define monitor_H

#include <iostream>
#include <string>
using namespace std;

class Monitor
{
	private:

		string _nombre;

		string _dni;

		int telefono;

		string ruta;

	public:

		//CONSTRUCTORES
		//constructor vacío
		Monitor()
		{
			_nombre = "";
			_dni = "";
			_telefono = 0;
			_ruta = ruta;
		}

		//constructor parametrizado
		Monitor(string nombre, string dni, int telefono, string ruta)
		{
			_nombre = nombre;
			_dni = dni;
			_telefono = telefono;
			_ruta = ruta;
		}

		//Constructor de copia
		Monitor(const Monitor &m)
		{
			this->_nombre = m._nombre;
			this->_dni = m._dni;
			this->_telefono = m._telefono;
			this->_ruta = m._ruta;
		}

		//OBSERVADORES
		string getNombre()
		{
			return _nombre;
		}

		string getDni()
		{
			return _dni;
		}

		int getTelefono()
		{
			return _telefono;
		}

		float getRuta()
		{
			return _ruta;
		}

		//MODIFICADORES
		void setNombre(string nombre)
		{
			_nombre = nombre;
		}

		void setDni(string dni)
		{
			_dni = dni;
		}

		void setTelefono(int telefono)
		{
			_telefono = telefono;
		}

		void setRuta(string ruta)
		{
			_ruta = ruta;
		}

		//METODOS 

		void registrarMonitor(string nombre, int edad, string dni);

		void mostrarMonitor();

};
