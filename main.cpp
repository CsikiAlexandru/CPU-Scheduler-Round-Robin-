#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Proces.h"
#include "Planificator.h"
using namespace std;
int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        cout << "Utilizare: " << argv[0] << " fisier_intrare.txt fisier_iesire [cuanta]\n";
        return 1;
    }

    ifstream f(argv[1]);
    if (!f.is_open())
    {
        cout << " Nu s-a putut deschide fisierul " << argv[1] << endl;
        return 1;
    }
    int cuanta;
    if (argc >= 4)
    {
        cuanta = atoi(argv[3]);
        if(cuanta <= 0)
        {
        cout<<"Cuanta trebuie sa fie un numar intreg, pozitiv \n";
        return 1;
        }
    }
    else
        cuanta = 3;

    planificator manager(cuanta);
    int id, timp_executie;
    while (f >> id >> timp_executie)
    {
        proces p(id, timp_executie);
        manager.adauga_proces(p);
    }

    manager.ruleaza(argv[2]);
    return 0;
}