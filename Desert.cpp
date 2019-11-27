#include "Desert.h"
#include <iostream>

Desert::Desert(double pret, TIPURI_DESERT tip) : Mancare(pret){
    _tip = tip;
}

Desert::~Desert() {
	std::cout << "Apel destructor Desert\n";
}