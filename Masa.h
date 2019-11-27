#pragma once
#include "Loc.h"
#include <vector>

class Masa
{
private:
	std::vector<Loc*> _locuri;

public:
	Masa();
	~Masa();
	const int get_nrlocuri();
	const std::vector<Loc*> get_vectorLocuri();
	bool OcupaLocLaMasa(Persoana*);
	void print();
};

