#include "luottotili.h"

Luottotili::Luottotili(string name, double raja) : Pankkitili(name)
{
    omistaja = name;
    luottoRaja = raja;
    cout << "Luottotili luotu nimella " << omistaja <<" | luottoraja on " << luottoRaja << endl;
}

bool Luottotili::deposit(double amount)
{
    if(amount > 0 && (saldo+amount) <= 0)
    {
        saldo += amount;
        cout << "Luottotili " << omistaja <<": Talletus " << amount << " tehty"
             << " | luottoa jaljella " << luottoRaja + saldo << endl;
        return true;
    } else {
        cout << "Luottotili: Talletus ei toiminut" << endl;
        return false;
    }
}

bool Luottotili::withdraw(double amount)
{
    if(amount > 0 && (saldo-amount) >= (0-luottoRaja))
    {
        saldo -= amount;
        cout << "Luottotili " << omistaja <<": Nosto " << amount << " tehty"
             << " | luottoa jaljella " << luottoRaja + saldo << endl;
        return true;
    } else {
        cout << "Luottotili: Talletus ei toiminut" << endl;
        return false;
    }
}
