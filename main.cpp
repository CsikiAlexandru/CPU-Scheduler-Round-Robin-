#include <iostream>
#include <fstream>
#include "Proces.h"
#include "Planificator.h"
using namespace std;
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Utilizare: " << argv[0] << " fisier_procese.txt.\n";
        return 1;
    }

    ifstream f(argv[1]);
    if (!f.is_open())
    {
        cout << " Nu s-a putut deschide fisierul " << argv[1] << endl;
        return 1;
    }

    planificator manager(3);
    int id, timp_executie;
    while (f >> id >> timp_executie)
    {
        proces p(id, timp_executie);
        manager.adauga_proces(p);
    }

    manager.ruleaza();
    return 0;
}