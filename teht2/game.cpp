#include "game.h"

Game::Game(int maxNumber) {
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    this-> maxNumber = maxNumber;
    cout << "GAME CONSTRUCTOR: object initialized with "
         << maxNumber
         << " as maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    cout << "Arvaa luku 1-" <<  maxNumber << endl;
    do{
        string s = "null";
        cin >> playerGuess;
        if(randomNumber == playerGuess){
            s = "Arvasit oikein!";
        } else if(randomNumber >= playerGuess){
            s = "Luku on suurempi";
        } else {
            s = "Luku on pienempi";
        }
        cout << s << endl;
        numOfGuesses++;
    }while(randomNumber != playerGuess);
    printGameResult();
}

void Game::printGameResult()
{
    cout << "Oikea luku oli " << randomNumber << endl;
    cout << "Arvausten maara: " << numOfGuesses << endl;
}
