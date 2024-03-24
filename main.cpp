#include <iostream>

void enterAnswer();
void enterGuess();
bool isCorrect();

int main() {
	bool done = false;

    enterAnswer();

    while (!done) {
        enterGuess();
        done = isCorrect();
    }

	return 0;
}