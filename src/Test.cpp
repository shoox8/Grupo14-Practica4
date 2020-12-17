#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
// IMPORTAR TODOS LOS FICHEROS DEL PROYECTO

void thisIsATest() {
	ASSERTM("start writing tests", false);
}

void correctEspacioNatRegistration() {
//	mostrarEspaciosNat();
//
//	int espaciosNat = 0;
//
//	registrarEspacioNat();
	ASSERT_EQUAL(1, 1);
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(thisIsATest));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}
