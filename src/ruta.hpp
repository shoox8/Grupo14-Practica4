#ifndef RUTA_H
#define RUTA_H
#include <iostream>
#include <string>
using namespace std;


class Ruta{
    private:
        string _nombre, _tipo, _direccion, _localidad, _estado;
        int _id_ruta, _duracion;
        float _longitud; 
    public:
        Ruta(){
            _nombre = "";
            _tipo = "";
            _direccion = "";
            _localidad = "";
            _id_ruta = 0;
            _estado = "";
            _duracion = 0;
            _longitud = 0;
        }

        Ruta(string nombre, string tipo, string direccion, string localidad, int id_ruta, int estado, int duracion, float longitud){
            _nombre = nombre;
            _tipo = tipo;
            _direccion = direccion;
            _localidad = localidad;
            _id_ruta = id_ruta;
            _estado = estado;
            _duracion = duracion;
            _longitud = longitud;
        }
        Ruta(const Ruta &m){
            this->_nombre = m._nombre;
            this->_tipo = m._tipo;
            this->_direccion = m._direccion;
            this->_localidad = m._localidad;
            this->_id_ruta = m._id_ruta;
            this->_estado = m._estado;
            this->_duracion = m._duracion;
            this->_longitud = m._longitud;
        }
        inline void setNombreRuta(string nombre){_nombre = nombre;}
        inline void setTipoRuta(string tipo){_tipo = tipo;}
        inline void setDireccionRuta(string direccion){_direccion = direccion;}
        inline void setLocalidadRuta(string localidad){_localidad = localidad;}
        inline void setID_Ruta(int id_ruta){_id_ruta = id_ruta;}
        inline void setEstadoRuta(string estado){_estado = estado;}
        inline void setDuracionRuta(int duracion){_duracion = duracion;}
        inline void setLongitudRuta(float longitud){_longitud = longitud;}

        inline string getNombreRuta()const{return _nombre;}
        inline string getTipoRuta()const{return _tipo;}
        inline string getDireccionRuta()const{return _direccion;}
        inline string getLocalidadRuta()const{return _localidad;}
        inline int getID_Ruta()const{return _id_ruta;}
        inline string getEstadoRuta()const{return _estado;}
        inline int getDuracionRuta()const{return _duracion;}
        inline float getLongitudRuta()const{return _longitud;}
};

void RegistrarRuta(string nFichero);
void MostrarRuta(string nFichero);
void MostrarRutaMantenimiento(string nFichero);


#endif