#include "pankkitili.h"

Pankkitili::Pankkitili(string name)
{
    omistaja = name;
    cout << "Pankkitili luotu nimella " << omistaja << endl;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double amount)
{
    if(amount > 0)
    {
        cout << "Pankkitili " << omistaja << ": Talletus " << amount << " tehty" << endl;
        saldo += amount;
        return true;
    } else {
        cout << "Pankkitili: Talletus ei toiminut" << endl;
        return false;
    }
}

bool Pankkitili::withdraw(double amount)
{
    if(amount > 0 && saldo >= amount)
    {
        cout << "Pankkitili " << omistaja << ": Nosto " << amount << " tehty" << endl;
        saldo -= amount;
        return true;
    } else {
        cout << "Pankkitili: Nosto ei toiminut" << endl;
        return false;
    }
}
