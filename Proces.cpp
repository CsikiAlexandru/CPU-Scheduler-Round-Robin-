#include <iostream>
#include "Proces.h"
using namespace std;
proces::proces(int id, int timp_executie)
{
    this->id = id;
    this->timp_executie = timp_executie;
    this->timp_ramas = timp_executie;
}
void proces::ruleaza(int timp)
{
    this->timp_ramas -= timp;
    if (this->timp_ramas < 0)
        this->timp_ramas = 0;
}
bool proces::este_gata()
{
    if (this->timp_ramas > 0)
        return false;
    else
        return true;
}

int proces::get_id() const
{
    return this->id;
}
int proces::get_timp_ramas() const
{
    return this->timp_ramas;
}