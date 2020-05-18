
#include "Autobuz.h"


Autobuz::Autobuz()
{
}

Autobuz::Autobuz(string codcalatorie1, string localitateplecare1, string localitatedestinatie1, string dataplecarii1, string numarzile1, int numarlocuri1, int numarlocurirezervate1)
{
	this->codcalatorie = codcalatorie1;
	this->localitateplecare = localitateplecare1;
	this->localitatedestinatie = localitatedestinatie1;
	this->dataplecarii = dataplecarii1;
	this->numarzile = numarzile1;
	this->numarlocuri = numarlocuri1;
	this->numarlocurirezervate = numarlocurirezervate1;
}

Autobuz::Autobuz(const Autobuz & b)
{
	this->codcalatorie = b.codcalatorie;
	this->localitateplecare = b.localitateplecare;
	this->localitatedestinatie = b.localitatedestinatie;
	this->dataplecarii = b.dataplecarii;
	this->numarzile = b.numarzile;
	this->numarlocuri = b.numarlocuri;
	this->numarlocurirezervate = b.numarlocurirezervate;
}

Autobuz & Autobuz::operator=(const Autobuz & c)
{
	if (this != &c)
	{
		this->setcodcalatorie(c.codcalatorie);
		this->setlocalitateplecare(c.localitateplecare);
		this->setlocalitatedestinatie(c.localitatedestinatie);
		this->setdataplecarii(c.dataplecarii);
		this->setnumarzile(c.numarzile);
		this->setnumarlocuri(c.numarlocuri);
		this->setnumarlocurirezervate(c.numarlocurirezervate);
	}
	return *this;
}

bool Autobuz::operator==(const Autobuz & a)
{
	if (this->codcalatorie == a.codcalatorie) return true;
	else return false;
}

string Autobuz::getcodcalatorie()
{
	return this->codcalatorie;
}

string Autobuz::getlocalitateplecare()
{
	return this->localitateplecare;
}

string Autobuz::getlocalitatedestinatie()
{
	return this->localitatedestinatie;
}

string Autobuz::getdataplecarii()
{
	return this->dataplecarii;
}

string Autobuz::getnumarzile()
{
	return this->numarzile;
}

int Autobuz::getnumarlocuri()
{
	return this->numarlocuri;
}

void Autobuz::setnumarlocuri(int numarlocuri1)
{
	this->numarlocuri = numarlocuri1;
}

int Autobuz::getnumarlocurirezervate()
{
	return this->numarlocurirezervate;
}

void Autobuz::setnumarlocurirezervate(int numarlocurirezervate1)
{
	this->numarlocurirezervate = numarlocurirezervate1;
}

void Autobuz::setcodcalatorie(string codcalatorie1)
{
	this->codcalatorie = codcalatorie1;
}

void Autobuz::setlocalitateplecare(string a)
{
	this->localitateplecare = a;
}

void Autobuz::setlocalitatedestinatie(string a)
{
	this->localitatedestinatie = a;
}

void Autobuz::setdataplecarii(string a)
{
	this->dataplecarii = a;
}

void Autobuz::setnumarzile(string b)
{
	this->numarzile = b;
}


Autobuz::~Autobuz()
{
}

ostream & operator<<(ostream & os, const Autobuz & a)
{
	os << a.codcalatorie << " " << a.localitateplecare << " " << a.localitatedestinatie << " " << a.dataplecarii << " ";
	os << a.numarzile << " " << " " << a.numarlocuri << " " << a.numarlocurirezervate << "\n";
	return os;
}
