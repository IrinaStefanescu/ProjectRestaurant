#include "Masa.h"
#include <time.h>
#include <iostream>

Masa::Masa() {
	int nr_locuri = std::rand() * std::rand() % 6 + 2;
	for (int i = 0; i < nr_locuri; i++) {
		Loc* loc = new Loc();
		_locuri.push_back(loc);
	}
}

Masa::~Masa() {
	std::cout << "Apel destructor Masa\n";
}

void Masa::print() {
	for (auto& loc : _locuri) {
		if (loc->get_persoana() == nullptr)
			std::cout << "Liber ";
		else
			std::cout << "Ocupat ";
	}
}

const int Masa::get_nrlocuri() {
	return _locuri.size();
}

bool Masa::OcupaLocLaMasa(Persoana* persoana) {
	bool valid = false;
	for (auto& loc : _locuri) {
		if (!loc->eOcupat()) {
			loc->ocupa_loc(persoana);
			valid = true;
			break;
		}
	}
	return valid;
}

const std::vector<Loc*> Masa::get_vectorLocuri() {
	return _locuri;
}