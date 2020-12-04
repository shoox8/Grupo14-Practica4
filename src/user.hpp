#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

class User{
private:
	string username_,pass_;
public:

	User(){

	};
//	Setters
    inline void setUsername(string username){username_ = username;}
    inline void setPassword(string pass){pass_ = pass;}
//	Getters
    inline string getUsername()const{return username_;}
    inline string getPassword()const{return pass_;}
};


istream &operator>>(istream &stream, User &u) {
    string username;
    string pass;

    cout << "Usuario: ";
    stream >> username;
    cout << "Password: ";
    stream >> pass;

    u.setUsername(username);
    u.setPassword(pass);

       // Se devuelve el flujo de entrada
    return stream;
  }
ostream &operator<<(ostream &stream, User const &u) {
    stream << u.getUsername();
    stream << u.getPassword();
    return stream;
  }


#endif
