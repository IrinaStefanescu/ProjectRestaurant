#pragma once
#include "Mancare.h"
#include "TipuriFelPrincipal.h"
#include <string>

class FelPrincipal : public Mancare
{
private:
	TIPURI_FEL_PRINCIPAL _tip;
    std::string catDeBineFacut[3];

public:
        FelPrincipal(double, TIPURI_FEL_PRINCIPAL);
		~FelPrincipal();
};
