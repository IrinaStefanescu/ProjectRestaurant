#include "FelPrincipal.h"
#include <iostream>

FelPrincipal::FelPrincipal(double pret, TIPURI_FEL_PRINCIPAL tip) : Mancare(pret){
    _tip = tip;
    if(tip == TIPURI_FEL_PRINCIPAL::VITA_CHATEAUBRIAND)
    {
        catDeBineFacut[0] = "Slab";
        catDeBineFacut[1] = "Mediu";
        catDeBineFacut[2] = "Bine";
    }
}

FelPrincipal::~FelPrincipal() {
	std::cout << "Apel destructor FelPrincipal\n";
}