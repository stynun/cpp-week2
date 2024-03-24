#include <iostream>

extern int answer[3], guess[3];
int chances = 5;

int strikes() {
    int count = 0;

    for (int i = 0; i < 3; i++) {
        if(guess[i] == answer[i])
            count++;
    }

    return count;
}

int balls() {
    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(guess[j] == answer[i])
            count++;
        }
    }
    count -= strikes();

    return count;
}

void result() {
    std::cout << "Strikes: " << strikes() << ", Balls: " << balls() << std::endl;
}

bool isCorrect() {
    if (strikes() == 3) {
        std::cout << "You win!";
        return true;
    }    
    else if (chances == 0) {
        std::cout << "You lose!";
        return true;
    }
    else {
        result();
        return false;
    }   
}

void printChances() {
    std::cout << chances << " chances left." << std::endl;
}

void subChances() {
    chances--;
}