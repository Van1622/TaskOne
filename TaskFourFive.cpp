//
// Created by Hi-Tech on 01.12.2024.
//


#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

const int MAX_ATTEMPTS = 5;

int main() {

    const std::vector<std::vector<char>> WORDS = {
        {'t', 'h', 'i'},
        {'i', 's'},
        {'a'},
        {'w', 'o', 'r', 'd'}
    };


    srand(static_cast<unsigned>(time(0)));


    int randomIndex = rand() % WORDS.size();
    const std::vector<char>& chosenWord = WORDS[randomIndex];
    int wordLength = chosenWord.size();


    std::vector<char> guessedWord(wordLength, '*');

    int attemptsLeft = MAX_ATTEMPTS;
    bool isWordGuessed = false;

    std::cout << "Welcome to the 'Guess the Word' game!" << std::endl;

    while (attemptsLeft > 0 && !isWordGuessed) {

        std::cout << "Current word: ";
        for (char c : guessedWord) {
            std::cout << c << ' ';
        }
        std::cout << "\nAttempts left: " << attemptsLeft << std::endl;


        char guessedLetter;
        int guessedPosition;

        std::cout << "Enter a letter: ";
        std::cin >> guessedLetter;

        std::cout << "Enter the position of the letter (0-" << wordLength - 1 << "): ";
        std::cin >> guessedPosition;


        if (guessedPosition < 0 || guessedPosition >= wordLength) {
            std::cout << "Invalid position! Try again.\n";
            continue;
        }


        if (chosenWord[guessedPosition] == guessedLetter) {
            guessedWord[guessedPosition] = guessedLetter;
            std::cout << "Good job! The letter is correct.\n";
        } else {
            --attemptsLeft;
            std::cout << "Wrong guess! Attempts left: " << attemptsLeft << "\n";
        }


        isWordGuessed = (guessedWord == chosenWord);
    }


    if (isWordGuessed) {
        std::cout << "Congratulations! You guessed the word: ";
        for (char c : guessedWord) {
            std::cout << c;
        }
        std::cout << std::endl;
    } else {
        std::cout << "Game over! The correct word was: ";
        for (char c : chosenWord) {
            std::cout << c;
        }
        std::cout << std::endl;
    }

    return 0;
}
