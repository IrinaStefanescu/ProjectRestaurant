#include "Bautura.h"
#include <iostream>

Bautura::Bautura(double pret, TIPURI_BAUTURA tip) {
	_tip = tip;
	_pret = pret;
}

Bautura::~Bautura(){
	std::cout << "Apel destructor Bautura\n";
}

TIPURI_BAUTURA Bautura::get_tip() {
	return _tip;
}
