#pragma once
#include"TestAutobuz.h"
#include"TestAvion.h"
#include"TestRepo.h"
#include"Service.h"
#include "Client.h"
#include"Calatorie.h"
using namespace std;

int main()
{
	testAutobuz();
	testAvion();
	testRepo();
	string p;
	cout << "Introduceti 1 pentru citirea datelor din fisier txt sau 2 pentru citirea datelor din csv";
	cin >> p;
	if (p == "1")
	{
		RepoFile<Autobuz> reBus{ "Autobuzee.txt" };
		RepoFile<Client> reClient{ "Client.txt" };
		RepoFile<Avion> reAvioane{ "Avioaneee.txt" };
		vector<Calatorie> v;
		Controller c{ reBus, reClient, reAvioane, v};
		Service a{ c };
		a.run();
	}
	else if (p == "2")
	{
		RepoFile<Autobuz> reBus{ "Autobuzee.txt" };
		RepoFile<Client> reClient{ "Client.txt" };
		RepoFile<Avion> reAvioane{ "Avioaneee.txt" };
		vector<Calatorie> v;
		Controller c{ reBus, reClient, reAvioane, v };
		Service a{ c };
		a.run();
	}
	else
	{
		cout << "Ati gresit tasta!";
	}
	return 0;
}
