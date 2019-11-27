#pragma once
#include "Restaurant.h"
#include "Persoana.h"
#include "Meniu.h"

class Manager
{
private:
	Restaurant* _restaurant;
	Meniu* _meniu;

public:
	Manager();
	~Manager();

	void addPersoane();
	void printDetalii();
	void iaComanda();
	void printMeniu();
};

