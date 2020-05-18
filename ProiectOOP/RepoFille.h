#pragma once
#include "Repo.h"
#include<iostream>
#include<ostream>
#include<fstream>
#include <string>
#include "Client.h"
using namespace std;

template <class T> class RepoFile : public Repo<T>
{
private:
	string numefisier;
	void read();
	void print();
public:
	~RepoFile()
	{

	}
	RepoFile(string numefisier1)
	{
		numefisier = numefisier1;
	}
	void addElem(T a) override
	{
		Repo<T>::addElem(a);
		print();
	}
	vector <T> getALL() override 
	{
		read();
		return this->list;
	}

	void update(T a, int pos)
	{
		Repo<T>::deletePos(pos);
		this->addElem(a);
	}
};

template <class T> void RepoFile<T>::read()
{
	ifstream fin(numefisier);
	T aux;
	while (fin >> aux)
	{
		Repo<T>::addElem(aux);
	}
	fin.close();
}

template<class T>void RepoFile<T>::print()
{
	ofstream fout(this->numefisier);
	vector<T> all = this->getALL();
	for (size_t i = 0; i < all.size(); i++)
		fout << all[i] << "\n";
	fout.close();
}