#include "slocpp.h"
uporaba imenskegaprostora std;

razred MojRazred
{
javno:
    praznina MojaFunkcija(stevilka a)
    { kven << "moja funkcija je prejela stevilko " << a << novavrstica; }

    staticna praznina DrugaFunkcija() { kven << "test" << novavrstica; }
};

stevilka glavna()
{
    // TO JE SLOVENSKI C++
    osemeni(cas(nic));

    stevilka a = 50;
    a += 10;
    kven << "a je : " << a << novavrstica;

    decimalka f;
    knoter >> f;
    kven << "vpisal si " << f << novavrstica;

    za (stevilka i = 0; i < 10; i++)
    {
        kven << i << novavrstica;
        ce (i % 2 == 0)
        {
            stevilka j = 0;
            delaj
            {
                kven << j;
                if (j == nakljucno() % 10)
                    zlomi;
            } dokler(++j < 10);
        }
    }

    MojRazred mojRazred;
    mojRazred.MojaFunkcija(69);
    MojRazred::DrugaFunkcija();

    vrni 0;
}