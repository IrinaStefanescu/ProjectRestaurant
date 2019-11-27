#include "Mancare.h"
#include <iostream>

Mancare::Mancare(double pret) {
	_pret = pret;
}

Mancare::~Mancare() {
	std::cout << "Apel destructor Mancare\n";
}

const double Mancare::get_pret() {
	return _pret;
}

/*const TIPURI_MANCARE Mancare::get_tip() {
	return _tip;
}
*/
