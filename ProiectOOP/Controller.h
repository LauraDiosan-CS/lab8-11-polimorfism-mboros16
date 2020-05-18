#pragma once
#include "Repo.h"
#include "RepoFille.h"
#include "Calatorie.h"

class Controller
{
private:
	RepoFile<Autobuz>& bus;
	RepoFile<Client>& clienti;
	RepoFile<Avion>& avionas;
	vector<Calatorie>& calatorii;

public:
	Controller();
	Controller(RepoFile<Autobuz>& _bus, RepoFile<Client>& _clienti, RepoFile<Avion>& _avionas, vector<Calatorie>& c) : bus{ _bus }, clienti{ _clienti }, avionas{ _avionas }, calatorii{c} {};
	void logare(string name, string pass);
	void afisarecalatorii();
	void filtrare(string a);
	void cumparare(string b, int p);
	void afisarecalatoriii();
	void deletee(Calatorie c);
	Calatorie getElementAtPosition(int pos);
	int getSize();
	void add(Calatorie c);
	~Controller();
};

