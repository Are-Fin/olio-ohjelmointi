#include "seuraaja.h"

Seuraaja::Seuraaja(string nimi)
{
    this->nimi = nimi;
    cout << "Seuraaja " << this->nimi << " konstruktori" << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << nimi << " viesti: " << viesti << endl;
}
