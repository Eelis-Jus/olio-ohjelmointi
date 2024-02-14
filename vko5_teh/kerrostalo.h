#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
using namespace std;
#include "katutaso.h"
#include "kerros.h"

class kerrostalo
{
public:
    kerrostalo();
    double laskeKulutus(double);

private:
    katutaso * ensimmainen;
    kerros * toinen;
    kerros * kolmas;
    kerros * neljas; //piti lisätä neljäs kerros, koska muuten print ei ole halutun näköinen
};

#endif // KERROSTALO_H
