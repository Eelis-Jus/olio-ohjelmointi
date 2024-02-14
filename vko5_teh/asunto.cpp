#include "asunto.h"

asunto::asunto() {
      cout<<"asunto luotu"<<endl;
}

void asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout<<"Asunto maaritetty asukkaita="<<asukasMaara<<" nelioita="<<neliot<<endl;
}

double asunto::laskeKulutus(double c)
{
    return asukasMaara*neliot*c;
}
