#include "Garnitura.h"
#include <iostream>

Garnitura::Garnitura(double pret, TIPURI_GARNITURA tip) : Mancare(pret){
    _tip = tip;
}

Garnitura::~Garnitura() {
	std::cout << "Apel destructor Garnitura\n";
}
