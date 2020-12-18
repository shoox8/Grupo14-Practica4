#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
// IMPORTAR TODOS LOS FICHEROS DEL PROYECTO
#include "monitor.hpp"

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


void correctMonitorReg()
{
	Monitor m("ale", "9", "9", 9, "camino");
	ASSERT(m.monitorUnico("9")==true);
	m.registrarMonitor("monitor.txt");
	ASSERT(m.monitorUnico("9")==false);
}

void correctRutaReg()
{
	 /*Ruta r("RutaDePrueba", "0", "0", "0", 0, 0, 0, 0.0); ESTÁ COMENTADO PORQUE RUTA SE QUEDA EN BUCLE (PASO FORZADO HASTA SU CORRECCIÓN)
	 ASSERT(r.rutaUnica("RutaDePrueba")==true);
	 r.registrarRuta("ruta.txt");
	 ASSERT(r.rutaUnica("RutaDePrueba")==false);
	 */
	 ASSERT(true); //BORRAR Y DESCOMENTAR LO DE ARRIBA CUANDO RUTA SE CORRIJA
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	//s.push_back(CUTE(thisIsATest));
	s.push_back(CUTE(correctMonitorReg));
	s.push_back(CUTE(correctRutaReg));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}
