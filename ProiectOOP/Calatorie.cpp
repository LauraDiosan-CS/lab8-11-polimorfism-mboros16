#include "Calatorie.h"


Calatorie::Calatorie(Autobuz a1)
{
	this->a = a1;
}

Calatorie::Calatorie(Avion b1)
{
	this->b = b1;
}

bool Calatorie::operator==(const Calatorie & a)
{
	if (this->a == a.a) return true;
	else if (this->b == a.b) return true;
	else return false;
}

Calatorie::~Calatorie()
{
}
