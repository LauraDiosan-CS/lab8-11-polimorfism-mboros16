#include "TestAvion.h"
#include<sstream>

void testAvion()
{
	Avion a("40g0", "Constanta", "Brasov", "15.07.2020", "DA", 40, 20);
	assert(a.getcodcalatorie() == "40g0");
	assert(a.getdataplecare() == "15.07.2020");
	assert(a.getlocalitatedest() == "Brasov");
	assert(a.getlocalitateplec() == "Constanta");
	assert(a.getescala() == "DA");
	assert(a.getnumarlocuritotale() == 40);
	a.setnumarlocurirez(45);
	assert(a.getnumarlocurirez() == 45);
}
