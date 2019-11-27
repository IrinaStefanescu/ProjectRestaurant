#include "Manager.h"
#include <string>
#include "Bautura.h"
#include <iostream>
#include <string.h>

Manager::Manager() {
	_restaurant = new Restaurant();
}

Manager::~Manager(){
	std::cout << "Apel destructor Manager\n";
}

void Manager::addPersoane() {
	int nr_persoane = std::rand() * std::rand() % _restaurant->get_nrlocuri() + 1;
	_restaurant->primeste_persoane(nr_persoane);
}

void Manager::printDetalii() {
	_restaurant->print_mese();
	std::cout << std::endl;
	std::cout << "Nr locuri total = " << _restaurant->get_nrlocuri() << "\n\n";
	std::cout << _restaurant->get_nrPersoane() << "\n";
	_restaurant->print_persoane();
	printMeniu();
}


void Manager::iaComanda() {
	std::vector <Persoana*> persoane = _restaurant->get_persoane();
	for (int persoana = 0; persoana < persoane.size(); persoana++) {
		double nota = 0;
		std::cout << "\n(Chelner) - Pot sa va servesc cu ceva de baut?\n";
		std::string raspuns;
	START:
		std::cout << "(Client) - "; std::cin >> raspuns;
		char r;
		try {
			if (raspuns.compare("Da") == 0 ||
				raspuns.compare("da") == 0 ||
				raspuns.compare("DA") == 0 ||
				raspuns.compare("Bine") == 0) {
				char r = 'y';
				switch (r) {
				case ('y'): {

					std::cout << "\n(Chelner) - Ce bautura ati dori?\n(Client) - ";
					char raspuns[50];
					std::cin >> raspuns;
					if (strcmp(raspuns, "vin-varsat-rosu") == 0)
					{
						Bautura* bautura = new Bautura(30, TIPURI_BAUTURA::VIN_VARSAT_ROSU);
						persoane[persoana]->adaugaLaNota(bautura->get_pret());
						nota += 30;
					}
					else if (strcmp(raspuns, "vin-varsat-alb") == 0)
					{
						Bautura* bautura = new Bautura(30, TIPURI_BAUTURA::VIN_VARSAT_ROSU);
						persoane[persoana]->adaugaLaNota(bautura->get_pret());
						nota += 30;
					}
					else if (strcmp(raspuns, "sticla-vin-bordeaux") == 0)
					{
						Bautura* bautura = new Bautura(100, TIPURI_BAUTURA::VIN_VARSAT_ROSU);
						persoane[persoana]->adaugaLaNota(bautura->get_pret());
						nota += 100;
					}
					else if (strcmp(raspuns, "sticla-vin-castel-bolovanu") == 0)
					{
						Bautura* bautura = new Bautura(100, TIPURI_BAUTURA::VIN_VARSAT_ROSU);
						persoane[persoana]->adaugaLaNota(bautura->get_pret());
						nota += 100;
					}
					else if (strcmp(raspuns, "bere-alcool") == 0)
					{
						Bautura* bautura = new Bautura(10, TIPURI_BAUTURA::VIN_VARSAT_ROSU);
						persoane[persoana]->adaugaLaNota(bautura->get_pret());
						nota += 10;
					}
					else if (strcmp(raspuns, "bere-fara-alcool") == 0)
					{
						Bautura* bautura = new Bautura(11, TIPURI_BAUTURA::VIN_VARSAT_ROSU);
						persoane[persoana]->adaugaLaNota(bautura->get_pret());
						nota += 11;
					}
					else if (strcmp(raspuns, "apa-plata") == 0)
					{
						Bautura* bautura = new Bautura(8, TIPURI_BAUTURA::VIN_VARSAT_ROSU);
						persoane[persoana]->adaugaLaNota(bautura->get_pret());
						nota += 8;
					}
					else
						std::cout << "\nRASPUNS INVALID\n";

					break;
				}
				case ('n'): {
					break;
				}
				default: {
					std::cout << "\n*Raspuns invalid*";
				}
				}
			}


			else
				throw - 1;
		}

		catch (int exception) {
			std::cout << "\nRASPUNS INVALID\n";
			goto START;
		}

		std::cout << "\n(Chelner) - Pot sa va servesc cu ceva de mancare?\n";
		std::cout << "(Client) - "; std::cin >> raspuns;
		if (raspuns.compare("Da") == 0 ||
			raspuns.compare("da") == 0 ||
			raspuns.compare("DA") == 0 ||
			raspuns.compare("Bine") == 0)
			r = 'y';
		else
			r = 'n';
		switch (r) {
		case ('y'): {
			std::cout << "\n(Chelner) - Ati dori o ciorba?\n(Client) - ";
			char raspuns[50];
			std::cin >> raspuns;
			if (raspuns[0] == 'd')
			{
				std::cout << "\n(Chelner) - Ce tip de ciorba ati dori?\n(Client) - ";
				std::cin >> raspuns;
				if (strcmp(raspuns, "De-burta") == 0) {
					persoane[persoana]->adaugaLaNota(15);
					nota += 15;
				}
				if (strcmp(raspuns, "De-legume") == 0) {
					persoane[persoana]->adaugaLaNota(13);
					nota += 13;
				}
				if (strcmp(raspuns, "De-ciuperci") == 0) {
					persoane[persoana]->adaugaLaNota(13);
					nota += 13;
				}
				std::cout << "\n(Chelner) - Doriti smantana?\n(Client) - ";
				std::cin >> raspuns;
				if (raspuns[0] == 'd') {
					persoane[persoana]->adaugaLaNota(5);
					nota += 5;
				}
				std::cout << "\n(Chelner) - Doriti ardei?\n(Client) - ";
				std::cin >> raspuns;
				if (raspuns[0] == 'd') {
					persoane[persoana]->adaugaLaNota(3);
					nota += 3;
				}
			}
			std::cout << "\n(Chelner) - Ati dori un fel principal?\n(Client) - ";
			std::cin >> raspuns;
			if (raspuns[0] == 'd')
			{
				std::cout << "\n(Chelner) - Ce fel principal ati dori?\n(Client) - ";
				std::cin >> raspuns;
				if (strcmp(raspuns, "Frigarui-de-pui") == 0) {
					persoane[persoana]->adaugaLaNota(20);
					nota += 20;
				}
				if (strcmp(raspuns, "Tocana-de-pui") == 0) {
					persoane[persoana]->adaugaLaNota(23);
					nota += 23;
				}
				if (strcmp(raspuns, "Vita-chateaubriand") == 0)
				{
					persoane[persoana]->adaugaLaNota(45);
					nota += 45;

				}
				if (strcmp(raspuns, "Vita-stroganoff") == 0) {
					persoane[persoana]->adaugaLaNota(47);
					nota += 47;

				}
				if (strcmp(raspuns, "Vita-file") == 0) {
					persoane[persoana]->adaugaLaNota(40);
					nota += 40;

				}
				std::cout << "\n(Chelner) - Ati dori si garnitura?\n(Client) - ";
				std::cin >> raspuns;
				if (strcmp(raspuns, "Cartofi-prajiti") == 0)
				{
					persoane[persoana]->adaugaLaNota(12);
					nota += 12;
				}
				if (strcmp(raspuns, "Cartofi-piure") == 0)
				{
					persoane[persoana]->adaugaLaNota(15);
					nota += 15;
				}
				if (strcmp(raspuns, "Orez-sarbesc") == 0)
				{
					persoane[persoana]->adaugaLaNota(13);
					nota += 13;
				}
			}
			std::cout << "\n(Chelner) - Ati dori un desert?\n(Client) - ";
			std::cin >> raspuns;
			if (raspuns[0] == 'd')
			{
				std::cout << "\n(Chelner) - Ce tip de desert ati dori?\n(Client) - ";
				std::cin >> raspuns;
				if (strcmp(raspuns, "Inghetata") == 0) {
					persoane[persoana]->adaugaLaNota(10);
					nota += 10;
				}
				if (strcmp(raspuns, "Tort-krantz") == 0) {
					persoane[persoana]->adaugaLaNota(18);
					nota += 18;
				}
			}
			break;
		}
		case ('n'): {
			break;
		}
		default: {
			std::cout << "\n*Raspuns invalid*";
		}
		}
		std::cout << "\nNOTA DVS ESTE : " << nota << "\n\n";
	}
}


void Manager::printMeniu() {
	std::cout << "\n\nMANCARE :\n";
	for (std::string mancare : _restaurant->get_meniu()->get_mancaruri()) {
		std::cout << mancare << "\n";
	}
	std::cout << "\nBAUTURI :\n";
	for (std::string bautura : _restaurant->get_meniu()->get_bauturi()) {
		std::cout << bautura << "\n";
	}
}