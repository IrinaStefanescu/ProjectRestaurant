#include "Ciorba.h"
#include <iostream>

Ciorba::Ciorba(double pret, TIPURI_CIORBA tip) : Mancare(pret){
    _tip = tip;
    if(tip == TIPURI_CIORBA::BURTA || tip == TIPURI_CIORBA::LEGUME){
        ardei = true;
        smantana = true;
    }
    else
    {
        ardei = false;
        smantana = false;
    }
}

Ciorba::~Ciorba(){
	std::cout << "Apel destructor Ciorba\n";
}

const bool Ciorba::areArdei(){
    return ardei;
}

const bool Ciorba::areSmantana(){
    return smantana;
}
