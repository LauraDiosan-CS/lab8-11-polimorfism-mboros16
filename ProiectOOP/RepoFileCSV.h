#pragma once
#include "Repo.h"
#include<iostream>
#include<ostream>
#include<fstream>
#include <string>
#include "Client.h"
using namespace std;

template <class T> class RepoFileCSV : public Repo<T>
{
private:
	string numefisier;
	void read();
	void print();
public:
	~RepoFileCSV()
	{

	}
	RepoFileCSV(string numefisier1)
	{
		numefisier = numefisier1;
	}
	void addElem(T a) override
	{
		Repo<T>::addElem(a);
		print();
	}
	vector<T> getALL() override
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

template <class T> void RepoFileCSV<T>::read()
{
	int numarlocuri, numarlocurirezervate;
	string escalanumarzile;
	string codcalatorie, plecare, destinatie, dataplecare;
	ifstream fin(numefisier);
	vector<string> words;
	string word, line;
	while (getline(fin, line))
	{
		stringstream ss(line);
		while (getline(ss, word, ','))
		{
			words.push_back(word);
		}
	}
	for (int i = 0; i < words.size(); i = i + 7)
	{
		codcalatorie = words.at(i);
		plecare = words.at(i + 1);
		destinatie = words.at(i + 2);
		dataplecare = words.at(i + 3);
		escalanumarzile = words.at(i + 4);
		numarlocuri = stoi(words.at(i + 5));
		numarlocurirezervate = stoi(words.at(i + 6));
		T a(codcalatorie, plecare, destinatie, dataplecare, escalanumarzile, numarlocuri, numarlocurirezervate);
		Repo<T>::addElem(a);
	}
	fin.close();
}

template<class T>void RepoFileCSV<T>::print()
{
	ofstream fout(this->numefisier);
	vector<T> all = this->getALL();
	for (size_t i = 0; i < all.size(); i++)
		fout << all[i] << "\n";
	fout.close();
}