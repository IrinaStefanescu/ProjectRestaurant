#pragma once
#include "TipuriMancare.h"

class Mancare
{
private:
	double _pret;
	//TIPURI_MANCARE _tip;

public:
	Mancare(double);
	~Mancare();
	const double get_pret();
	//const TIPURI_MANCARE get_tip();
};

