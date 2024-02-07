#include <iostream>
#include "kerrostalo.h"
using namespace std;

int main()
{
    kerrostalo objekti;
    objekti.KerrostalonMaaritus();
    cout << "Koko Kerrostalon kulutus on = " << objekti.laskeKulutus(3)<<endl;
    return 0;
}

//oman ajankäytön takia ei ihan niin hyvä kuin halusin, mutta paras minkä sain aikaan, jatkossa paremmin.
