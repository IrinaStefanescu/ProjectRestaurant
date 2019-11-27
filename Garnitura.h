#pragma once
#include "TipuriGarnitura.h"
#include "Mancare.h"

class Garnitura : public Mancare
{
private:
    TIPURI_GARNITURA _tip;

public:
    Garnitura(double, TIPURI_GARNITURA);
	~Garnitura();
};

