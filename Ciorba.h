#pragma once
#include "TipuriCiorba.h"
#include "Mancare.h"

class Ciorba : Mancare
{
private:
    TIPURI_CIORBA _tip;
    bool smantana;
    bool ardei;

public:
    Ciorba(double pret, TIPURI_CIORBA tip);
	~Ciorba();
    const bool areSmantana();
    const bool areArdei();
};

