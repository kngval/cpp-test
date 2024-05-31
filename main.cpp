#include <iostream>
#include <string>
#include <random>
using namespace std;
int main(){

    
    bool isPlaying = true;
    int min = 1;
    int max = 10;
    int attempts = 0;
    int guess;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1,10);
    int random_number = dis(gen);
    
    cout << "Welcome to the Number Guessing Game \n";

    while(guess != random_number){
        cout << "Enter your guess:";
        cin >> guess;
        attempts++;
        if(guess > random_number){
            cout << "Guess is too high, try again \n";
        } else if (guess < random_number){
            cout << "Guess is too low, try again \n";
        } else {
            cout << "Congrats you guessed it in " << attempts << " attempts";
        }
    };

}


