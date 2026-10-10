#pragma once
#include <queue>
#include "Proces.h"

class planificator
{
    std::queue<proces> coada_procese;
    int cuanta_timp;

public:
    planificator(int cuanta = 0);
    void adauga_proces(proces p);
    void ruleaza();
};