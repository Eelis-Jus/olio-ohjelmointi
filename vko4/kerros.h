#ifndef KERROS_H
#define KERROS_H
#include <iostream>
using namespace std;
#include "asunto.h"
class kerros
{
public:
    kerros();
    void maaritaAsunnot();
    virtual  double laskeKulutus(double c);
private:
    asunto as1;
    asunto as2;
    asunto as3;
    asunto as4;
};

#endif // KERROS_H
