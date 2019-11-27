#include "Restaurant.h"
#include <time.h>
#include <iostream>

Restaurant::Restaurant() {
	_meniu = new Meniu();
	srand(time(NULL));
	int nr_mese = std::rand() * std::rand() % 10 + 1;
	for (int i = 0; i < nr_mese; i++) {
		Masa* masa_noua = new Masa();
		_locuri += masa_noua->get_nrlocuri();
		_mese.push_back(masa_noua);
	}
}

Restaurant::~Restaurant(){
	std::cout << "Apel destructor Restaurant\n";
}

const std::vector<Masa*> Restaurant::get_mese() {
	return this->_mese;
}

void Restaurant::print_mese() {
	for (auto& masa : _mese) {
		masa->print();
		std::cout << std::endl;
	}
}

const int Restaurant::get_nrlocuri() {
	return _locuri;
}

void Restaurant::primeste_persoane(int nrPersoane) {
	for (int i = 0; i < nrPersoane; i++) {
		if (_nrpersoane < _locuri) {
			double buget = double(std::abs(std::rand() * std::rand()) % 500 + 100);
			Persoana* nouVenit = new Persoana(buget);
			_persoane.push_back(nouVenit);
			_nrpersoane += 1;
			for (auto& masa : _mese) {
				if (masa->OcupaLocLaMasa(nouVenit))
					break;
				else
					continue;
			}
		}
		else
			break;
	}
}

void Restaurant::print_persoane() {
	std::cout << std::endl;
	for (auto& persoana : _persoane) {
		std::cout << persoana->get_buget() << " ";
	}
}

const int Restaurant::get_nrPersoane() {
	return _nrpersoane;
}

const std::vector<Persoana*> Restaurant::get_persoane(){
    return _persoane;
}

Meniu* Restaurant::get_meniu() {
	return _meniu;
}
