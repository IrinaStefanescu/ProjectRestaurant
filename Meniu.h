#pragma once
#include <string>
#include <vector>

class Meniu
{
	std::vector<std::string> mancaruri;
	std::vector<std::string> bauturi;

public:
	Meniu();
	~Meniu();

	std::vector<std::string> get_mancaruri();
	std::vector<std::string> get_bauturi();
};

