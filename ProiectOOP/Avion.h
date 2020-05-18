#pragma once
#include<string>
#include<iostream>
#include<vector>
using namespace std;

class Avion
{
private:
	string codcalatorie;
	string localitateplec;
	string localitatedest;
	string dataplecare;
	string escala;
	int numarlocuritotale;
	int numarlocurirez;

public:
	Avion();
	Avion(string a, string b, string c, string d, string e, int f, int g);
	Avion(const Avion& b);
	~Avion();
	bool operator==(const Avion & a);
	Avion& operator=(const Avion &c);

	string getcodcalatorie();
	string getlocalitateplec();
	string getlocalitatedest();
	string getdataplecare();
	string getescala();
	int getnumarlocuritotale();
	int getnumarlocurirez();
	void setnumarlocurirez(int a);
	void setnumarlocuri(int numarlocuri1);
	void setcodcalatorie(string codcalatorie1);
	void setlocalitateplecare(string a);
	void setlocalitatedestinatie(string a);
	void setdataplecarii(string a);
	void setnumarzile(string b);

	friend istream& operator >>(istream& is, Avion& c)
	{

		is >> c.codcalatorie >> c.localitateplec >> c.localitatedest >> c.dataplecare >> c.escala >> c.numarlocuritotale >> c.numarlocurirez;
		return is;
	}
	friend ostream & operator<<(ostream & os, const Avion & a);
};

