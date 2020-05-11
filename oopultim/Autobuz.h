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
	//Autobuz& operator=(const Autobuz &c);
	~Autobuz();

	string getcodcalatorie();
	string getlocalitateplecare();
	string getlocalitatedestinatie();
	string getdataplecarii();
	string getnumarzile();
	int getnumarlocuri();
	void setnumarlocuri(int numarlocuri1);
	int getnumarlocurirezervate();
	void setnumarlocurirezervate(int numarlocurirezervate1);

	friend istream& operator >>(istream& is, Autobuz& c)
	{
		is >> c.codcalatorie >> c.localitateplecare >> c.localitatedestinatie >> c.dataplecarii >> c.numarzile >> c.numarlocuri >> c.numarlocurirezervate;
		return is;
	}
	friend ostream& operator<<(ostream& os, const Autobuz& a);
};

