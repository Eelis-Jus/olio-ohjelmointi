#include "katutaso.h"

katutaso::katutaso() {
    as1=new asunto;
    as2=new asunto;
    cout<<"katutaso luotu"<<endl;
}

void katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
}

double katutaso::laskeKulutus(double c)
{
    return as1->laskeKulutus(c)+as2->laskeKulutus(c);
}


