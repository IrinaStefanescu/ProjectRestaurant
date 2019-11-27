#pragma once
#include "TipuriBautura.h"

class Bautura
{
private:
	TIPURI_BAUTURA _tip;
	double _pret;

public:
	Bautura(double, TIPURI_BAUTURA);
	~Bautura();

	TIPURI_BAUTURA get_tip();
	const double get_pret(){return _pret;}
};

