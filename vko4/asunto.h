#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;
class asunto
{
public:
    asunto();
    int asukasMaara;
    int neliot;
    void maarita(int a, int b);
    virtual double laskeKulutus(double c);
};

#endif // ASUNTO_H
