#pragma once
#include "Mancare.h"
#include "TipuriDesert.h"

class Desert : public Mancare
{
    private:
        TIPURI_DESERT _tip;

    public:
            Desert(double, TIPURI_DESERT);
            ~Desert(){}
};

