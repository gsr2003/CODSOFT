#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random secret number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    cout << "Welcome to the Number Guessing Game!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "The guess is too low, Try a higher number." << endl;
        } else {
            cout << "The guess is too high, Try a lower number." << endl;
        }
    }

    cout << "The secret number was: " << secretNumber << endl;
    return 0;
}
