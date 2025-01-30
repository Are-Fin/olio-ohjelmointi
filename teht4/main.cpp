#include "asiakas.h"

int main()
{
    Asiakas a1("Teuvo", 8500);
    cout << a1.getNimi() << endl;
    a1.showSaldo();
    a1.talletus(500);
    a1.nosto(400);
    a1.luotonNosto(8500);
    a1.luotonMaksu(7000);
    a1.showSaldo();
    cout << endl;
    Asiakas a2("Pekka", 8500);
    cout << a1.getNimi() << endl;;
    a2.luotonNosto(600);
    a1.tiliSiirto(100, a2);
    a2.showSaldo();
    return 0;
}
