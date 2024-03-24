#include <iostream>

int answer[3], guess[3] = {0};
int temp;

void enterAnswer() {
    std::cout << "Enter a answer: ";
    std::cin >> temp;
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