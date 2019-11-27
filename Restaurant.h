#pragma once
#include <vector>
#include "Masa.h"
#include "Meniu.h"

class Restaurant
{
private:
	std::vector<Masa*> _mese;
	std::vector<Persoana*> _persoane;
	Meniu* _meniu;
	int _locuri = 0;
	int _nrpersoane = 0;

public:
	Restaurant();
	~Restaurant();

	const std::vector<Masa*> get_mese();
	const std::vector<Persoana*> get_persoane();
	const int get_nrlocuri();
	const int get_nrPersoane();
	Meniu* get_meniu();
	void primeste_persoane(int);
	void print_mese();
	void print_persoane();
};
