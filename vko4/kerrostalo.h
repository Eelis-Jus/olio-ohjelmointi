#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
using namespace std;
class kerrostalo
{
public:
    kerrostalo();
    void KerrostalonMaaritus();
    double laskeKulutus(double c);
private:
    katutaso ensimmainen;
    kerros toinen;
    kerros kolmas;
};

#endif // KERROSTALO_H
