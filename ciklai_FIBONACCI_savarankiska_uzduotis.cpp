#include <iostream>
using namespace std;

int main ()
{
    int pirmas=0, antras=2, suma;

    for (int i=2; i<5; i++)

    {
        suma=pirmas+antras;
        pirmas=antras;
        antras=suma;

        cout<<suma<<" ";
    }

    return 0;
}


/*
Parašyti for ciklą, kuris leistų vartotojui pasirinkti
kiek fibonačiaus skaičių išvesti į ekraną.

Susikurkite tris kintamuosius, kurie jums padės tai pasiekti.
Pirmi du kintamieji saugos paskutinius du skaičius.
Trečiasis bus šių pirmų dviejų skaičių suma.

Pirmus du skaičius išveskite ne cikle, o prieš jį ir ciklą
pradėkite vykdyti nuo 2, o ne nuo 0.

Kiekvieno ciklo metu turite perskaičiuot trečiąjį skaičių
(pirmų dviejų skaičių sudėtis), tuomet pirmasis skaičius yra
lygus antram, o antras lygus trečiam, išvesti į ekraną trečią
skaičių.
*/
