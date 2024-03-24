#include <iostream>
#include <cstdlib>
#include <ctime>

int answer[3], guess[3] = {0};
int temp = 0;

void makeAnswer() {
    while (temp < 100) {
        srand(static_cast<unsigned int>(time(NULL))); 
        temp = rand() % 1000;
    }
    
    std::cout << "Answer is " << temp << std::endl;
    
    answer[0] = temp / 100;
    temp %= 100;
    answer[1] = temp / 10;
    temp %= 10;
    answer[2] = temp;
    
}

void enterGuess() {
    std::cout << "Enter a guess: ";
    std::cin >> temp;
    guess[0] = temp / 100;
    temp %= 100;
    guess[1] = temp / 10;
    temp %= 10;
    guess[2] = temp;
} 