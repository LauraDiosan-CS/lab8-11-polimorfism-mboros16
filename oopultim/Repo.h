#pragma once
#include "Autobuz.h"
#include "Avion.h"
#include "Client.h"
#include <vector>
using namespace std;

template <class T> class Repo
{
protected:
	vector<T> list;
public:
	Repo();
	~Repo();
	virtual void addElem(T a);
	virtual void deleteElem();
	virtual vector<T> getALL();
	int getSize();
	void deletePos(int pos);
	void upt(T a, T b);
	T& getElem(int pos);

};

template <class T> Repo<T>::Repo()
{

}

template <class T> Repo<T>::~Repo()
{

}

template <class T> void Repo<T>::upt(T a, T b)
{
	auto p;
	for (auto i = 0; i < list.size(); i++)
	{
		if (list[i] == a)
		{
			p = i;
		}
	}
	for (auto i = p; i < list.size() - 1; i++)
	{
		list[i] = list[i + 1];
	}
	list[list.size() - 1] = b;
}

template <class T> void Repo<T>::addElem(T a)
{
	this->list.push_back(a);

}

template <class T> void Repo<T>::deleteElem()
{
	this->list.pop_back();
}

template <class T> void Repo<T>::deletePos(int pos)
{
	this->list.erase(list.begin() + pos);
}

template <class T>vector<T> Repo<T>::getALL()
{
	return this->list;
}

template <class T> int Repo<T>::getSize()
{
	return this->list.size();
}

template <class T> T& Repo<T>::getElem(int pos)
{
	return this->list.at(pos);
}
