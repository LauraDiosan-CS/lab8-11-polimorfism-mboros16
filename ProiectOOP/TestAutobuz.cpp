#include "TestAutobuz.h"


void testAutobuz()
{
	Autobuz a("39g0", "Constanta", "Brasov", "15.07.2020", "1", 40, 20);
	assert(a.getcodcalatorie() == "39g0");
	assert(a.getdataplecarii() == "15.07.2020");
	assert(a.getlocalitatedestinatie() == "Brasov");
	assert(a.getlocalitateplecare() == "Constanta");
	assert(a.getnumarzile() == "1");
	a.setnumarlocuri(50);
	assert(a.getnumarlocuri() == 50);
	a.setnumarlocurirezervate(45);
	assert(a.getnumarlocurirezervate() == 45);
}
