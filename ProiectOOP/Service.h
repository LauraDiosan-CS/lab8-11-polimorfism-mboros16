#pragma once
#include "Controller.h"
#include "RepoFileCSV.h"

class Service
{
private:
	Controller& ctrl;
public:
	Service(Controller& _ctrl) : ctrl{ _ctrl } {};
	~Service();
	void run();
};

