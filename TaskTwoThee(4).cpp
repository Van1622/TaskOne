
#include "TaskTwoTh.h"
#include <iostream>
#include <string>

int main() {
    std::string firstName1, lastName1;
    int age1;
    bool isStudent1;
    char studentInput1;

    std::cout << "Enter information for the first user:\n";
    std::cout << "Write your firstname: ";
    std::cin >> firstName1;
    std::cout << "Write your lastname: ";
    std::cin >> lastName1;
    std::cout << "Write your age: ";
    std::cin >> age1;
    std::cout << "Are you a student? (enter 'y' for yes or 'n' for no): ";
    std::cin >> studentInput1;
    isStudent1 = (studentInput1 == 'y' || studentInput1 == 'Y');

    std::string firstName2, lastName2;
    int age2;
    bool isStudent2;
    char studentInput2;

    std::cout << "\nEnter information for the second user:\n";
    std::cout << "Write your firstname: ";
    std::cin >> firstName2;
    std::cout << "Write your lastname: ";
    std::cin >> lastName2;
    std::cout << "Write your age: ";
    std::cin >> age2;
    std::cout << "Are you a student? (enter 'y' for yes or 'n' for no): ";
    std::cin >> studentInput2;
    isStudent2 = (studentInput2 == 'y' || studentInput2 == 'Y');

    std::cout << "\nInformation of the first user:\n";
    std::cout << "Firstname: " << firstName1
              << "\nLastname: " << lastName1
              << "\nAge: " << age1
              << "\nAre you a student? " << (isStudent1 ? "yes" : "no") << std::endl;

    std::cout << "\nInformation of the second user:\n";
    std::cout << "Firstname: " << firstName2
              << "\nLastname: " << lastName2
              << "\nAge: " << age2
              << "\nAre you a student? " << (isStudent2 ? "yes" : "no") << std::endl;

    return 0;
}

