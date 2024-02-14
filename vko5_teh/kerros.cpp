#include "kerros.h"

kerros::kerros() {
    as1=new asunto;
    as2=new asunto;
    as3=new asunto;
    as4=new asunto;
     cout<<"Kerros luotu"<<endl;
}

void kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

double kerros::laskeKulutus(double c)
{
    return as1->laskeKulutus(c)+as2->laskeKulutus(c)
           + as3->laskeKulutus(c)+as4->laskeKulutus(c);

}
