#pragma once
#include "Persoana.h"

class Loc
{
private:
	Persoana* _persoana;
	bool _ocupat;

public:
	Loc(Persoana* persoana = nullptr);
	~Loc();

	void ocupa_loc(Persoana*);
	const bool eOcupat();
	const Persoana* get_persoana();
};

