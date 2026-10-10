#pragma once
#include <iostream>

class proces
{
    int id;
    int timp_executie;
    int timp_ramas;

public:
    proces(int id = 0, int timp_executie = 0);
    void ruleaza(int timp);
    bool este_gata();

    int get_id() const;
    int get_timp_ramas() const;
};
