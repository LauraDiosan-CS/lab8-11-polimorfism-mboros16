#pragma once
#include "Repo.h"
#include "RepoFille.h"

class Controller
{
private:
	RepoFile<Autobuz>& bus;
	RepoFile<Client>& clienti;
	RepoFile<Avion>& avionas;
public:
	Controller(RepoFile<Autobuz>& _bus, RepoFile<Client>& _clienti, RepoFile<Avion>& _avionas) : bus{ _bus }, clienti{ _clienti }, avionas{ _avionas } {};
	void logare(string name, string pass);
	void afisarecalatorii();
	void filtrare(string a);
	void cumparare(string b, int p);
	void afisarecalatoriii();
	~Controller();
};

