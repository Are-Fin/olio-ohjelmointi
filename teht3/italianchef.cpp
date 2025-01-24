#include "italianchef.h"


ItalianChef::ItalianChef()
{
    cout << "!ItalianChef default Constructor!" << endl;
}

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "!ItalianChef " << chefName << " Constructor!" << endl;
}

ItalianChef::~ItalianChef()
{
cout << "!ItalianChef " << chefName << " Destructor!" << endl;
}

bool ItalianChef::askSecret(string guess, int flour, int water)
{
    cout << "You answered " << guess << "..." << endl;

    if(guess.compare(password) == 0){
        cout << "Password ok!" << endl;
        this->flour = flour;
        this->water = water;
        int pizza = makePizza();
        string s = "null";
        if (pizza == 1){
            s = "";
        } else {
            s = "s";
        }
        cout << chefName
             << " is returning " << pizza
             << " pizza"<< s << endl;

        return true;
    } else {
        cout << "Incorrect password!" << endl;
        return false;
    }

}

int ItalianChef::makePizza()
{
    cout << chefName << " got " << flour << " flour and "
         << water << " water" << endl;
    int flourPort = flour / 5;
    int waterPort = water / 5;
    int pizza = 0;
    if ((flourPort < waterPort) || (flourPort == waterPort)) {
        pizza = flourPort;
    } else {
        pizza = waterPort;
    }
    cout << "Flour portion is " << flourPort
         << " | Water portion is " << waterPort << endl;
    return pizza;
}


