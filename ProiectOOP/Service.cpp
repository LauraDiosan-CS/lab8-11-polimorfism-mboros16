#include "Service.h"
using namespace std;
Service::~Service()
{
}

void Service::run()
{
	cout << "Introduceti numele de utilizator:";
	string nume;
	cin >> nume;
	cout << "Introduceti parola:";
	string parola;
	cin >> parola;
	ctrl.logare(nume, parola);
	cout << "V-ati logat cu succes! \n";
	ctrl.afisarecalatorii();
	string p = "1";
	cout << "Apasati tasta 1 pentru a face filtrare dupa zi sau orice alta tasta pentru a sari peste acest pas";
	cin >> p;
	string a;
	while (p == "1")
	{
		cout << "Introduceti ziua.luna.anul ";
		cin >> a;
		ctrl.filtrare(a);
		cout << "Apasati tasta 1 pentru a face filtrare dupa zi sau orice alta tasta pentru a sari peste acest pas";
		cin >> p;
	}
	int t;
	cout << "\nIntroduceti codul transportului caruia doriti sa faceti rezervare:";
	string cod;
	cin >> cod;
	cout << "\nIntroduceti cate locuri doriti sa rezervati!";
	cin >> t;
	ctrl.cumparare(cod, t);
	ctrl.afisarecalatoriii();
	cout << "Apasati tasta 1 pentru Logout!";
	int tas;
	cin >> tas;
	while (tas != 1)
	{
		cout << "Ati gresit tasta";
	}
}
