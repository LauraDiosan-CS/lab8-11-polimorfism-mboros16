#pragma once
#include "TestRepo.h"
#include<iostream>
#include<cassert>
#include<sstream>
using namespace std;

void testRepo()
{
	Repo<Autobuz> re;
	Autobuz a("39g0", "Constanta", "Brasov", "15.07.2020", "1", 40, 20);
	re.addElem(a);
	assert(re.getSize() == 1);
	Autobuz a1("39gg0", "Brasov", "Constanta", "16.07.2020", "1", 60, 40);
	re.addElem(a1);
	assert(re.getSize() == 2);
	vector <Autobuz> list;
	list = re.getALL();
	assert(list[0].getcodcalatorie() == "39g0");
	re.deleteElem();
	assert(re.getSize() == 1);

	Repo<Avion> avv;
	Avion av("400g", "Valcea", "Brasov", "20.07.2020", "DA", 100, 80);
	avv.addElem(av);
	assert(avv.getSize() == 1);
	Avion av1("40g0", "Valcea", "Cluj", "26.07.2020", "NU", 90, 40);
	avv.addElem(av1);
	assert(avv.getSize() == 2);
	vector <Avion> list1;
	list1 = avv.getALL();
	assert(list1[0].getcodcalatorie() == "400g");
	avv.deleteElem();
	assert(avv.getSize() == 1);
}