#pragma once
#include "Autobuz.h"
#include "Avion.h"

class Calatorie
{
private:
	Autobuz a;
	Avion b;
public:
	Calatorie(Autobuz a1);
	Calatorie(Avion b1);
	bool operator==(const Calatorie & a);
	~Calatorie();
};

