#include <iostream>
#include <cstdlib>
#include <ctime>

void subChances();

int answer[3], guess[3] = {0};
int temp = 0;
bool done = false;

void makeAnswer() {
    srand((unsigned)(time(NULL))); 
    for (int i = 0; i < 3; i++) {    
        answer[i] = rand() % 10;

        for (int j = 0; j < i; j++) {
            if (answer[i] == answer[j])
                i--;
        }
    }

}

void enterGuess() {
    subChances();

    std::cout << "Enter a guess: ";
    std::cin >> temp;
    guess[0] = temp / 100;
    temp %= 100;
    guess[1] = temp / 10;
    temp %= 10;
    guess[2] = temp;
} 