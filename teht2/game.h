#ifndef GAME_H
#define GAME_H
#include <iostream>

using namespace std;

class Game
{
public:
    Game(int maxNumber);
    ~Game();
    void play();
private:
    void printGameResult();
    int maxNumber = 0;
    int playerGuess = 0;
    int randomNumber = 0;
    int numOfGuesses = 0;
};

#endif // GAME_H
