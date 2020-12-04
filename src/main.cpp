#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int option;
	char user, password;

	cout<<"Seleccione la opcion que desee realizar:"<<endl;
	cout<<"1.Login"<<endl;
	cout<<"2.Salir"<<endl;

	cin<<option;
		if(option==1){
			cout<<"Introduzca su usuario:"<<endl;
			cin>>user;
			cout<<"Introduzca su contraseña:"<<endl;
			cin>>password;
		}
		else {
			cout<<"Ha salido del programa."<<endl;
			return 0;
		}
}
