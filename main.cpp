#include <iostream>

void makeAnswer();
void printChances();
void enterGuess();
bool isCorrect();

int main() {
	bool done = false;

    makeAnswer();

    while (!done) {
        printChances();
        enterGuess();
        done = isCorrect();
    }

	return 0;
}