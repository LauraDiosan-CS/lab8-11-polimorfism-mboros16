#pragma once
#include<string>
#include<iostream>
#include<vector>
using namespace std;

class Autobuz
{
private:
	string codcalatorie;
	string localitateplecare;
	string localitatedestinatie;
	string dataplecarii;
	string numarzile;
	int numarlocuri;
	int numarlocurirezervate;

public:
	Autobuz();
	Autobuz(string codcalatorie1, string localitateplecare1, string localitatedestinatie1, string dataplecarii1, string numarzile1, int numarlocuri1, int numarlocurirezervate1);
	Autobuz(const Autobuz& b);
	Autobuz& operator=(const Autobuz &c);
	bool operator==(const Autobuz & a);
	~Autobuz();

	string getcodcalatorie();
	string getlocalitateplecare();
	string getlocalitatedestinatie();
	string getdataplecarii();
	string getnumarzile();
	int getnumarlocuri();
	int getnumarlocurirezervate();
	void setnumarlocurirezervate(int numarlocurirezervate1);
	void setnumarlocuri(int numarlocuri1);
	void setcodcalatorie(string codcalatorie1);
	void setlocalitateplecare(string a);
	void setlocalitatedestinatie(string a);
	void setdataplecarii(string a);
	void setnumarzile(string b);

	friend istream& operator >>(istream& is, Autobuz& c)
	{
		is >> c.codcalatorie >> c.localitateplecare >> c.localitatedestinatie >> c.dataplecarii >> c.numarzile >> c.numarlocuri>> c.numarlocurirezervate;
		return is;
	}
	friend ostream & operator<<(ostream & os, const Autobuz & a);
};

