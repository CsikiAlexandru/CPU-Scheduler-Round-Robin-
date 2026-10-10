#include <queue>
#include <iostream>
#include <fstream>
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

void planificator::ruleaza(const char *f_iesire)
{
    ofstream f(f_iesire);
    if (!f.is_open())
    {
        cout << "Fisier de iesire invalid \n";
        return;
    }
    f << "Incepe Simularea ROUND ROBIN \n";

    while (!this->coada_procese.empty())
    {
        proces p_curent;
        p_curent = this->coada_procese.front();
        this->coada_procese.pop();
        p_curent.ruleaza(this->cuanta_timp);
        f << "Procesul cu id-ul " << p_curent.get_id() << " a rulat.";
        f << "Timp de executie ramas: " << p_curent.get_timp_ramas() << endl;

        if (p_curent.este_gata() == true)
            f << "Procesul cu id-ul " << p_curent.get_id() << " este gata." << endl;
        else
            this->adauga_proces(p_curent);
    }
    f << "Toate procesele au rulat cu succes!" << endl;
    cout << "Simulare finalizata cu succes! Rezultatele au fost salvate in " << f_iesire << endl;
}