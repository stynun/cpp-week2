#include <iostream>

void makeAnswer();
void enterGuess();
bool isCorrect();

int main() {
	bool done = false;

    makeAnswer();

    while (!done) {
        enterGuess();
        done = isCorrect();
    }

	return 0;
}