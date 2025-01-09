#include <iostream>
#include <ctime>

using namespace std;

int game(int);

int main()
{
    int score = game(20);

    cout << "Yrityksia " << score << endl;

    return 0;
}

int game(int maxnum){

    srand(time(NULL));

    if(maxnum < 2){
        maxnum = 2;
    }

    int randArvo = rand() % maxnum + 1;
    int arvaus = 0;
    int score = 0;

    cout << "Arvaa luku 1-" << maxnum << endl;

    do {
        string s = "null";
        cin >> arvaus;
        if (arvaus == randArvo){
            s = "Arvasit oikein!";
        } else if (arvaus < randArvo){
            s = "Luku on suurempi";
        } else if (arvaus > randArvo){
            s = "Luku on pienempi";
        }
        cout << s << endl;
        score++;

    } while (arvaus != randArvo);

    return score;
}
