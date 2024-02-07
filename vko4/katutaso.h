#ifndef KATUTASO_H
#define KATUTASO_H
using namespace std;
#include "asunto.h"
#include "kerros.h"
class katutaso: public kerros
{
public:
    katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double c);
private:
    asunto as1;
    asunto as2;
};

#endif // KATUTASO_H
