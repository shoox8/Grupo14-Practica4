#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
// IMPORTAR TODOS LOS FICHEROS DEL PROYECTO
#include "sendero.hpp"

void thisIsATest() {
	ASSERTM("start writing tests", false);
}

void correctEspacioNatRegistration() {
	string nombre, espacionatural, estado;
	int rutas;

	fstream archivo;
	archivo.open("test.txt", ios::out);

	if(!archivo.is_open()) {
		cout<<"Error al abrir el fichero de sendero.txt"<<endl;
	}

	nombre = "Sendero1";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 3;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre = "Sendero2";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 4;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre = "Sendero3";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 3;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre = "Sendero4";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 3;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre = "Sendero5";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 3;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), false);

	archivo.close();
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(correctEspacioNatRegistration));
//	s.push_back(CUTE(thisIsATest));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

//int main(int argc, char const *argv[]) {
//    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
//}
