#include "asiakas.h"

Asiakas::Asiakas(string name, double raja) :
    kayttotili(name), luottotili(name, raja)
{
    nimi = name;
    cout << "Asiakkuus luotu " << name << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "--------------------------" << endl
         << nimi << endl
         << "Kayttotilin saldo: " << kayttotili.getBalance() << endl
         << "Luottotilin saldo: " << luottotili.getBalance() << endl
         << "--------------------------" << endl;
}

bool Asiakas::talletus(double amount)
{
    return kayttotili.deposit(amount);
}

bool Asiakas::nosto(double amount)
{
    return kayttotili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount)
{
    return luottotili.deposit(amount);
}

bool Asiakas::luotonNosto(double amount)
{
    return luottotili.withdraw(amount);
}

bool Asiakas::tiliSiirto(double amount, Asiakas &asiakas)
{
    if(kayttotili.withdraw(amount) == true){
        cout << nimi << " siirtaa " << amount << " tiliin " << asiakas.getNimi() <<endl;
        asiakas.talletus(amount);
        return true;
    } else {
        cout << nimi <<":n tilinsiirto tiliin " << asiakas.getNimi() << " epaonnistui!" << endl;
        return false;
    }
}
