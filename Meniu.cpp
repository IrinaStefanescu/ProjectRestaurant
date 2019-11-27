#include "Meniu.h"
#include <iostream>

Meniu::Meniu() {
	mancaruri.push_back("Ciorba de burta");
	mancaruri.push_back("Ciorba de legume");
	mancaruri.push_back("Ciorba de ciuperci");
	mancaruri.push_back("Frigarui de pui");
	mancaruri.push_back("Tocana de pui");
	mancaruri.push_back("Vita Chateaubriand");
	mancaruri.push_back("Vita Stroganoff");
	mancaruri.push_back("File de vita");
	mancaruri.push_back("Cartofi prajiti");
	mancaruri.push_back("Cartofi piure");
	mancaruri.push_back("Orez sarbesc");
	mancaruri.push_back("Inghetata");
	mancaruri.push_back("Tort krantz");
	bauturi.push_back("Vin varsat rosu");
	bauturi.push_back("Vin varsat alb");
	bauturi.push_back("Sticla vin Bordeaux");
	bauturi.push_back("Sticla vin Castel Bolovanu");
	bauturi.push_back("Bere alcool");
	bauturi.push_back("Bere fara alcool");
	bauturi.push_back("Apa plata");
}

Meniu::~Meniu() {
	std::cout << "Apel destrucor meniu\n";
}

std::vector<std::string> Meniu::get_bauturi() {
	return bauturi;
}

std::vector<std::string> Meniu::get_mancaruri() {
	return mancaruri;
}