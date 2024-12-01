
#include <iostream>
#include <string>
#include <limits> 

int main() {
    int userCount = 0;
    std::cout << "Enter the number of users to input: ";
    std::cin >> userCount;

    if (userCount <= 0) {
        std::cout << "Invalid number of users!" << std::endl;
        return 1;
    }

    for (int i = 0; i < userCount; ++i) {
        std::string firstName, lastName;
        int age;
        bool isStudent;
        char studentInput;

        std::cout << "\nEnter information for user " << i + 1 << ":\n";

        std::cout << "Write your firstname: ";
        std::cin >> firstName;

        std::cout << "Write your lastname: ";
        std::cin >> lastName;

        while (true) {
            std::cout << "Write your age: ";
            std::cin >> age;

            if (std::cin.fail() || age <= 0) {
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                std::cout << "Invalid input. Please enter a positive integer for age.\n";
            } else {
                break; 
            }
        }

        std::cout << "Are you a student? (enter 'y' for yes or 'n' for no): ";
        std::cin >> studentInput;
        isStudent = (studentInput == 'y' || studentInput == 'Y');

        std::cout << "\nInformation of user " << i + 1 << ":\n";
        std::cout << "Firstname: " << firstName
                  << "\nLastname: " << lastName
                  << "\nAge: " << age
                  << "\nAre you a student? " << (isStudent ? "yes" : "no") << std::endl;
    }

    return 0;
}
