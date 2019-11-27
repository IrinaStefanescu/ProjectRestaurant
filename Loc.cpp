#include "Loc.h"
#include <iostream>


Loc::Loc(Persoana* persoana) {
	_persoana = persoana;
	if (_persoana == nullptr)
		_ocupat = false;
	else
		_ocupat = true;
}

Loc::~Loc(){
	std::cout << "Apel destructor Loc\n";
}

const Persoana* Loc::get_persoana() {
	return _persoana;
}

void Loc::ocupa_loc(Persoana* persoanaNoua) {
	_ocupat = true;
	_persoana = persoanaNoua;
}

const bool Loc::eOcupat() {
	return _ocupat;
}