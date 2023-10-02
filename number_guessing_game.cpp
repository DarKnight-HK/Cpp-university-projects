#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

int main() {
    using std::cout;
    using std::cin;

    srand(static_cast<unsigned int>(time(NULL)));

    char playAgain;

    do {
        int num = (rand() % 100) + 1;
        int guess, tries = 0;

        cout << "***************NUMBER GUESSING GAME***************\n";
        cout << "I'm thinking of a number between 1 and 100.\n";

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            tries++;

            if (cin.fail()) {
                cout << "Invalid input. Please enter a number.\n";
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else if (guess < 1 || guess > 100) {
                cout << "Your guess is out of range (1-100). Try again.\n";
            } else if (guess < num) {
                cout << "Too low!\n";
            } else if (guess > num) {
                cout << "Too high!\n";
            } else {
                cout << "CORRECT! You guessed in " << tries << " tries\n";
            }
        } while (guess != num);

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thanks for playing!\n";

    return 0;
}
