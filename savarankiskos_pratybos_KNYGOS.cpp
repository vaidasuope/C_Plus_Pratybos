#include <iostream>
using namespace std;

int main ()
{
    int biudz, pirmaK, antraK, treciaK, kiekP, kiekA, kiekT, sumaP, sumaA, sumaT, sumaKnygoms;

    cout<<"Koki biudzeta turite? ";
    cin>>biudz;

    cout<<"Pirmos knygos kaina: ";
    cin>>pirmaK;

    cout<<"Pirmos knygos kiekis: ";
    cin>>kiekP;

    cout<<"Antros knygos kaina: ";
    cin>>antraK;

    cout<<"Antros knygos kiekis: ";
    cin>>kiekA;

    cout<<"Trecios knygos kaina: ";
    cin>>treciaK;

    cout<<"Trecios knygos kiekis: ";
    cin>>kiekT;

    sumaP=pirmaK*kiekP;
    sumaA=antraK*kiekA;
    sumaT=treciaK*kiekT;
    sumaKnygoms=sumaP+sumaA+sumaT;

    cout<<"Knygoms pirkti reikes "<<sumaKnygoms<<" eur"<<endl;

    int piniguLikutis=biudz-sumaKnygoms;

    if (biudz>sumaKnygoms)
    {
        cout<<"Biudzetas pakankamas"<<endl;
        cout<<"Dar liko: "<<piniguLikutis<<" eur"<<endl;
    }
    else if (biudz<sumaKnygoms)
    {
        cout<<"Biudzetas virsytas"<<endl;
        cout<<"Biudzetas virsytas: "<<piniguLikutis<<" eur"<<endl;
    }

    return 0;
}

/*
UŽDUOTIS

Programa turi suskaičiuoti ar mokyklai užteks turimo biudžeto, kad nupirktų bibliotekai reikiamas trijų rūšių knygas.

Vartotojo įvedama informacija:
- turimas biudžetas, skirtas knygų pirkimui
- pirmos rūšies knygų kaina
- pirmos rūšies knygų kiekis
- antros rūšies knygų kaina
- antros rūšies knygų kiekis
- trečios rūšies knygų kaina
- trečios rūšies knygų kiekis

Suskaičiuoti kiek pinigų prireiks norint įsigyti visas knygas ir atsakymą išvesti į ekraną.

Ar biudžeto užtektų norint įsigyti visas šias knygas? Jei taip į ekraną išvesti teigiamą atsakymą ir
kiek pinigų liktų nupirkus knygas. Jei ne, išvesti per kiek pinigų būtų viršytas biudžetas.
*/
