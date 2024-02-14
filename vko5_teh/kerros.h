#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
#include<string>
using namespace std;
class kerros
{
public:
    kerros();
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);

private:
    asunto * as1;
    asunto * as2;
    asunto * as3;
    asunto * as4;
  //  asunto * as1;
  //  asunto * as2;
  //  asunto * as3;
  //  asunto * as4;
};

#endif // KERROS_H
