#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef("Gordon");
    string name = chef.getName();

    int salads = chef.makeSalad(20);
    int soups = chef.makeSoup(20);

    ItalianChef iChef("Mario");
    string iName = iChef.getName();
    int iSalad  = iChef.makeSalad(30);
    int iSoup = iChef.makeSoup(28);

    bool secretPizza = iChef.askSecret("pizza", 20, 30);
    return 0;
}
