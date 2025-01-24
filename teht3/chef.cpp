#include "chef.h"

Chef::Chef()
{
    cout << "!Chef default Constructor!" << endl;
}

Chef::Chef(string name) {
    chefName = name;
    cout << "!Chef " << chefName << " Constructor!" << endl;
}

Chef::~Chef()
{
cout << "!Chef " << chefName << " Destructor!" << endl;
}

string Chef::getName()
{
    cout << "Got chef name " << chefName << endl;
    return chefName;
}

int Chef::makeSalad(int saladIngr)
{
    int port = saladIngr / 5;
    cout << chefName << " is making salad."
         << " | Salad ingredients = " << saladIngr
         << " | Portions returning " << port << endl;
    return port;
}

int Chef::makeSoup(int soupIngr)
{
    int port = soupIngr / 3;
    cout << chefName << " is making soup."
         << " | Soup ingredients = " << soupIngr
         << " | Portions returning = " << port << endl;
    return port;
}
