#include "kerrostalo.h"

kerrostalo::kerrostalo() {
    cout<<"kerrostalo luotu"<<endl;
}

void kerrostalo::KerrostalonMaaritus(){
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    ensimmainen.maaritaAsunnot();
    toinen.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    cout<<"Kerrostalo luotu"<<endl;
}

double kerrostalo::laskeKulutus(double c) {
    return ensimmainen.laskeKulutus(c) + toinen.laskeKulutus(c) + kolmas.laskeKulutus(c);
}
