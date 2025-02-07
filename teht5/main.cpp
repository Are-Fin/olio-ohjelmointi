#include <iostream>

using namespace std;

#include "seuraaja.h"
#include "notifikaattori.h"

int main()
{
    Seuraaja *A = new Seuraaja("Antti");
    Seuraaja *B = new Seuraaja("Bertta");
    Seuraaja *C = new Seuraaja("Ciili");
    Notifikaattori *N = new Notifikaattori();
    //Seuraaja D("Dude");
    //Seuraaja E("Erkki");
    N->lisaa(C);
    N->lisaa(B);
    N->lisaa(A);
    cout << endl;
    N->tulosta();
    cout << endl;
    N->poista(A);
    cout << endl;
    N->tulosta();
    cout << endl;
    N->postita("Moro");
    N->lisaa(A);
    N->postita("Poro");


    /*
    A->next = B;
    B->next = C;

    Seuraaja *alku = A;
    while(alku != nullptr)
    {
        cout << "Listassa nyt = " << alku->getNimi() << endl;
        alku->paivitys("Toimii!!");
        alku = alku->next;
        if(alku != nullptr)
        {
            cout << "Listassa seuraava = " << alku->getNimi() << endl;
        } else {
            cout << "Lista loppu" << endl;
        }
    }
    */
    delete A;
    delete B;
    delete C;
    delete N;

    return 0;
}
