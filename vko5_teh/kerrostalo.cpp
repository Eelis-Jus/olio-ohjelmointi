#include "kerrostalo.h"

kerrostalo::kerrostalo() {
    toinen=new kerros; //yksi kerroksista piti laittaa ennen katutasoa, että print on halutun tapainen
    ensimmainen=new katutaso;
    kolmas=new kerros;
    neljas=new kerros;
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    ensimmainen->maaritaAsunnot();
    toinen->maaritaAsunnot();
    kolmas->maaritaAsunnot();
    neljas->maaritaAsunnot();
}

double kerrostalo::laskeKulutus(double c)
{
    double katutasonKulutus = ensimmainen->laskeKulutus(c);
    double kerrostenKulutus = toinen->laskeKulutus(c) + kolmas->laskeKulutus(c)+ neljas->laskeKulutus(c);
    return katutasonKulutus+kerrostenKulutus;
}
