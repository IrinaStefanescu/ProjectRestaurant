#include "Persoana.h"
#include <iostream>

Persoana::Persoana(double buget) {
	_buget = buget;
}

Persoana::~Persoana() {
	std::cout << "Apel destrcutor Persoana\n";
}

const double Persoana::get_buget() {
	return _buget;
}

const double Persoana::get_nota(){
    return totalNota;
}

void Persoana::adaugaLaNota(double pret){
    totalNota += pret;
}
