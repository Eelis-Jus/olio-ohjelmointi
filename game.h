#ifndef GAME_H
#define GAME_H

#endif // GAME_H
#include<iostream>
#include<list>
#include<ctime>
using namespace std;

class Game {
public:
    //Game(int);
    void play();
    ~Game(); //NOT Unary complement(bit inversion)
    Game(int);
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};
Game::Game(int a){
    cout<<"anna luku"<<endl;
    cin>>a;
    maxNumber = a;
}
void Game::play(){
    srand(time(0));
    randomNumber=rand()%(maxNumber);
    cout<<"object initialized with "<<maxNumber<<" as max value"<<endl;
    do{
        cout<<"Give your guess between 1 - "<<maxNumber<<endl;
        cin>>playerGuess;

        if(playerGuess<randomNumber){
    cout<<"Your guess is too small"<<endl;
            numOfGuesses++;
        }
        if (playerGuess>randomNumber){
    cout<<"your guess is too big"<<endl;
              numOfGuesses++;
        }
    }while(playerGuess != randomNumber);

    if(playerGuess == randomNumber){
    numOfGuesses++;

    printGameResult();
    }
}

void Game::printGameResult(){
    cout<<"You guessed right answer = "<<randomNumber<<" with "<<numOfGuesses<<" quesses"<<endl;
    cout<<"Your guess is right = "<<randomNumber<<endl;
}

Game::~Game(){
    cout<<"GAME DESTRUCTOR:object cleared from stack memory"<<endl;
}
