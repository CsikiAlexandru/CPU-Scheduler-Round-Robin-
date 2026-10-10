#include <queue>
#include <iostream>
#include "Proces.h"
#include "Planificator.h"
using namespace std;
planificator::planificator(int cuanta)
{
    this->cuanta_timp = cuanta;
}
void planificator::adauga_proces(proces p)
{
    this->coada_procese.push(p);
}

void planificator::ruleaza()
{
    cout << "Incepe Simularea ROUND ROBIN \n";

    while (!this->coada_procese.empty())
    {
        proces p_curent;
        p_curent = this->coada_procese.front();
        this->coada_procese.pop();
        p_curent.ruleaza(this->cuanta_timp);
        cout << "Procesul cu id-ul " << p_curent.get_id() << " a rulat.";
        cout << "Timp de executie ramas: " << p_curent.get_timp_ramas() << endl;

        if (p_curent.este_gata() == true)
            cout << "Procesul cu id-ul " << p_curent.get_id() << " este gata." << endl;
        else
            this->adauga_proces(p_curent);
    }
    cout << "Toate procesele au rulat cu succes!" << endl;
}