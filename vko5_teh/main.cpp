#include <iostream>

using namespace std;
#include "asunto.h"
#include "kerrostalo.h"

int main()
{
    kerrostalo * pointer;
    pointer=new kerrostalo;
    cout<<"Kerrostalon kulutus, = "<<pointer->laskeKulutus(1)<<endl;
    return 0;
}

