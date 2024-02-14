#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include <iostream>
using namespace std;

class katutaso  //piti poistaa kerroksen perintä että print toimii halutulla tavalla
{
public:
    katutaso();
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);
private:
    asunto * as1;
    asunto * as2;
   // asunto as1;
   // asunto as2;
};

#endif // KATUTASO_H
