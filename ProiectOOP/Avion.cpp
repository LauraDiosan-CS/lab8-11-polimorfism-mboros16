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

Avion::Avion(const Avion & b)
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

bool Avion::operator==(const Avion & a)
{
	if (this->codcalatorie == a.codcalatorie) return true;
	else return false;
}

Avion & Avion::operator=(const Avion & c)
{
	if (this != &c)
	{
		this->setcodcalatorie(c.codcalatorie);
		this->setlocalitateplecare(c.localitateplec);
		this->setlocalitatedestinatie(c.localitatedest);
		this->setdataplecarii(c.dataplecare);
		this->setnumarzile(c.escala);
		this->setnumarlocuri(c.numarlocuritotale);
		this->setnumarlocurirez(c.numarlocurirez);
	}
	return *this;
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

void Avion::setnumarlocuri(int numarlocuri1)
{
	this->numarlocuritotale = numarlocuri1;
}

void Avion::setcodcalatorie(string codcalatorie1)
{
	this->codcalatorie = codcalatorie1;
}

void Avion::setlocalitateplecare(string a)
{
	this->localitateplec = a;
}

void Avion::setlocalitatedestinatie(string a)
{
	this->localitatedest = a;
}

void Avion::setdataplecarii(string a)
{
	this->dataplecare = a;
}

void Avion::setnumarzile(string b)
{
	this->escala = b;
}

ostream & operator<<(ostream & os, const Avion & a)
{
	os << a.codcalatorie << " " << a.localitateplec << " " << a.localitatedest<< " " << a.dataplecare << " ";
	os << a.escala << " " << a.numarlocuritotale << " " << a.numarlocurirez << "\n";
	return os;
}
