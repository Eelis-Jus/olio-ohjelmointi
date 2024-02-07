#include "katutaso.h"

katutaso::katutaso() {
    cout<<"katutaso luotu"<<endl;
}


void katutaso::maaritaAsunnot(){
    cout<<"maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    cout<<"katutaso maaritetty"<<endl;
}

double katutaso::laskeKulutus(double c){
     return as1.laskeKulutus(c) + as2.laskeKulutus(c);
}
