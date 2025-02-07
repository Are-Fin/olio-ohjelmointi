#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout << "Notifikaattori konstrukti" << endl;
}

void Notifikaattori::lisaa(Seuraaja *seur)
{
    seur->next=seuraajat;
    seuraajat = seur;
    cout << "Listalle lisattiin " << seur->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *seur)
{
    Seuraaja *alku = seuraajat;
    if(alku != seur)
    {
        while(alku->next != seur)
        {
            alku = alku->next;
        }
        alku->next = seur->next;
    } else {
        seuraajat = alku->next;
    }
    cout << "Listalta poistettu " << seur->getNimi() << endl;
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while(alku != nullptr)
    {
        cout << "Listassa nyt = " << alku->getNimi() << endl;
        alku = alku->next;
        if(alku != nullptr)
        {
            cout << "Listassa seuraava = " << alku->getNimi() << endl;
        } else {
            cout << "Lista loppu" << endl;
        }
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while(alku != nullptr)
    {
        alku->paivitys(viesti);
        alku = alku->next;

    }
}
