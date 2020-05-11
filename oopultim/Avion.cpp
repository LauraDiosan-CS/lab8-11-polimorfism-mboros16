#include "Avion.h"

Avion::Avion()
{
}

Avion::Avion(string a, string b, string c, string d, string e, int f, int g)
{
	this->codcalatorie = a;
	this->localitateplec = b;
	this->localitatedest = c;
	this->dataplecare = d;
	this->escala = e;
	this->numarlocuritotale = f;
	this->numarlocurirez = g;
}

Avion::Avion(const Avion& b)
{
	this->codcalatorie = b.codcalatorie;
	this->localitateplec = b.localitateplec;
	this->localitatedest = b.localitatedest;
	this->dataplecare = b.dataplecare;
	this->escala = b.escala;
	this->numarlocuritotale = b.numarlocuritotale;
	this->numarlocurirez = b.numarlocurirez;
}


Avion::~Avion()
{
}

string Avion::getcodcalatorie()
{
	return this->codcalatorie;
}

string Avion::getlocalitateplec()
{
	return this->localitateplec;
}

string Avion::getlocalitatedest()
{
	return this->localitatedest;
}

string Avion::getdataplecare()
{
	return this->dataplecare;
}

string Avion::getescala()
{
	return this->escala;
}

int Avion::getnumarlocuritotale()
{
	return this->numarlocuritotale;
}

int Avion::getnumarlocurirez()
{
	return this->numarlocurirez;
}

void Avion::setnumarlocurirez(int a)
{
	this->numarlocurirez = a;
}

ostream& operator<<(ostream& os, const Avion& a)
{
	os << a.codcalatorie << " " << a.localitateplec << " " << a.localitatedest << " " << a.dataplecare << " ";
	os << a.escala << " " << a.numarlocuritotale << " " << a.numarlocurirez << "\n";
	return os;
}
