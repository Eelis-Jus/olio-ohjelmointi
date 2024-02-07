#include "asunto.h"

asunto::asunto() {

    cout<<"asunto luotu"<<endl;
}

void asunto::maarita(int a, int b){
    asukasMaara=b;
    neliot=a;
    cout<<"asunto maaritetty asukkaita ="<<asukasMaara<<"nelioita ="<<neliot<<endl;
}

double asunto::laskeKulutus(double c){
    return c * neliot;
}
