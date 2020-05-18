#include "Controller.h"

Controller::Controller()
{
}

void Controller::logare(string name, string pass)
{
	vector<Client> c = clienti.getALL();
	Client a(name, pass);
	clienti.addElem(a);
}

void Controller::afisarecalatorii()
{
	vector<Autobuz> t = bus.getALL();
	vector<Avion> p = avionas.getALL();
	for (auto i = 0; i < bus.getSize(); i++)
	{
		cout << bus.getElem(i);
		if (bus.getElem(i).getnumarlocurirezervate() == bus.getElem(i).getnumarlocuri())
		{
			cout << "La transportul de mai sus nu mai se pot rezerva locuri!\n";
		}
	}
	for (auto i = 0; i < avionas.getSize(); i++)
	{
		cout << avionas.getElem(i);
		if (avionas.getElem(i).getnumarlocurirez() == avionas.getElem(i).getnumarlocuritotale())
		{
			cout << "La transportul de mai sus nu mai se pot rezerva locuri!";
		}
	}
}

void Controller::filtrare(string a)
{
	int ok = 1;
	for (auto i = 0; i < bus.getSize(); i++)
	{
		if (bus.getElem(i).getdataplecarii() == a)
		{
			cout << bus.getElem(i);
			ok = 0;
		}
	}

	for (auto i = 0; i < avionas.getSize(); i++)
	{
		if (avionas.getElem(i).getdataplecare() == a)
		{
			cout << avionas.getElem(i);
			ok = 0;
		}
	}
	if (ok == 1) cout << "Nu s-a gasit nici o plecare in data respectiva \n";
}

void Controller::cumparare(string b, int p)
{
	int ok = 1;
	for (auto i = 0; i < bus.getSize(); i++)
	{
		if (bus.getElem(i).getcodcalatorie() == b)
		{
			if (bus.getElem(i).getnumarlocuri() - bus.getElem(i).getnumarlocurirezervate() < p)
			{
				cout << "\nNU SUNT SUFICIENTE LOCURI!\n";
				ok = 0;
			}
			else
			{
				bus.getElem(i).setnumarlocurirezervate(bus.getElem(i).getnumarlocurirezervate() + p);
				bus.update(bus.getElem(i), i);
				ok = 0;
				i = bus.getSize();
			}
		}
	}
	for (auto i = 0; i < avionas.getSize(); i++)
	{
		if (avionas.getElem(i).getcodcalatorie() == b)
		{
			if (avionas.getElem(i).getnumarlocuritotale() - avionas.getElem(i).getnumarlocurirez() < p)
			{
				cout << "\nNU SUNT SUFICIENTE LOCURI!\n";
				ok = 0;
			}
			else
			{
				avionas.getElem(i).setnumarlocurirez(avionas.getElem(i).getnumarlocurirez() + p);
				avionas.update(avionas.getElem(i), i);
				ok = 0;
				i = avionas.getSize();
			}
		}
	}
	if (ok == 1) cout << "NU S-A GASIT NICI UN LOC CU CODUL RESPECTIV!\n";
}

void Controller::afisarecalatoriii()
{
	for (auto i = 0; i < bus.getSize(); i++)
	{
		cout << bus.getElem(i);
		if (bus.getElem(i).getnumarlocurirezervate() == bus.getElem(i).getnumarlocuri())
		{
			cout << "La transportul de mai sus nu mai se pot rezerva locuri!";
		}
	}
	for (auto i = 0; i < avionas.getSize(); i++)
	{
		cout << avionas.getElem(i);
		if (avionas.getElem(i).getnumarlocurirez() == avionas.getElem(i).getnumarlocuritotale())
		{
			cout << "La transportul de mai sus nu mai se pot rezerva locuri!";
		}
	}
}

void Controller::deletee(Calatorie c)
{
	for (int i = 0; i < calatorii.size(); i ++)
	{
		if (calatorii.at(i) == c) delete calatorii.at[i];
	}
}

Calatorie Controller::getElementAtPosition(int pos)
{
	return calatorii.at(pos);
}

int Controller::getSize()
{
	return calatorii.size();
}

void Controller::add(Calatorie c)
{
	calatorii.push_back(c);
}

Controller::~Controller()
{

}
