#include "TESTELIVESERVICE.h"

void resetElements(Controller c, vector<Calatorie> defaultTrips) {
	for (Calatorie c : defaultTrips)
		Controller.add(c);
}

void test_Service()
{
	Avion c1("156", "”Cluj - Napoca", "Dubai", "14.06.2020", "false", 100, 80);
	Autobuz c2("873", "Constanta", "Cluj - Napoca", "15.07.2020", "1", 40, 20);
	Autobuz c3("118", "Vienna", "Bucuresti", "14.06.2020", "3", 80, 50);
	Avion c4("122", "Bucuresti", "Cluj - Napoca", "14.06.2020", "false", 100, 80);
	Avion c5("122", "Cluj - Napoca", "Bucuresti", "14.06.2020", "false", 100, 80);


	Controller service;
	vector<Calatorie> defaultTrips;
	defaultTrips.push_back(c1);
	defaultTrips.push_back(c2);
	defaultTrips.push_back(c3);
	defaultTrips.push_back(c4);
	defaultTrips.push_back(c5);

	resetElements(service, defaultTrips);

	service.deletee(c1);
	assert(service.getSize() == 3);
	assert(service.getElementAtPosition(0) == c2);
	assert(service.getElementAtPosition(1) == c3);
	assert(service.getElementAtPosition(2) == c5);

	resetElements(service, defaultTrips);

	service.deletee(c2);
	assert(service.getSize() == 4);
	assert(service.getElementAtPosition(0) == c1);
	assert(service.getElementAtPosition(1) == c3);
	assert(service.getElementAtPosition(2) == c4);
	assert(service.getElementAtPosition(3) == c5);

	resetElements(service, defaultTrips);

	service.deletee(c3);
	assert(service.getSize() == 3);
	assert(service.getElementAtPosition(0) == c1);
	assert(service.getElementAtPosition(1) == c2);
	assert(service.getElementAtPosition(2) == c5);

	resetElements(service, defaultTrips);
	service.deletee(c4);
	assert(service.getSize() == 1);
	assert(service.getElementAtPosition(0) == c2);


	resetElements(service, defaultTrips);
	service.deletee(c5);
	assert(service.getSize() == 3);
	assert(service.getElementAtPosition(0) == c1);
	assert(service.getElementAtPosition(1) == c2);
	assert(service.getElementAtPosition(2) == c3);
}
