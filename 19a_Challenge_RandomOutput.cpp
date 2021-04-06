#include <iostream>
#include <cstdlib>

int main19() {

    // Codecademy exercise

    std::cout << "MAGIC 8-BALL: ";

    srand(time(NULL));

    int answer = std::rand() % 10;

    if (answer == 0) {
        std::cout << "It is certain.\n";
    }

    else if (answer == 1) {
        std::cout << "Without a doubt.";
    }

    else if (answer == 2) {
        std::cout << "Reply hazy, try again.";
    }

    else if (answer == 3) {
        std::cout << "Signs point to yes.";
    }

    else if (answer == 4) {
        std::cout << "Cannot predict now.";
    }

    else if (answer == 5) {
        std::cout << "Better not tell you now.";
    }

    else if (answer == 6) {
        std::cout << "My reply is no.";
    }

    else if (answer == 7) {
        std::cout << "My sources say no.";
    }

    else if (answer == 8) {
        std::cout << "Most likely.";
    }

    else if (answer == 9) {
        std::cout << "It is decidedly so.";
    }

    else {
        std::cout << "Impossible.\n";
    }


    return 0;
}