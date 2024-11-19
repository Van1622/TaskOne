//
// Created by Hi-Tech on 14.11.2024.
//



int main() {
    std::string firstName, lastName;
    int age;
    bool isStudent;
    char studentInput;

    std::cout << "Write your firstname: ";
    std::cin >> firstName;

    std::cout << "Write your lastname: ";
    std::cin >> lastName;

    std::cout << "Write your age: ";
    std::cin >> age;

    std::cout << "Are you a student? (enter 'y' for yes or 'n' for no): ";
    std::cin >> studentInput;

    if (studentInput == 'y' || studentInput == 'Y') {
        isStudent = true;
    } else {
        isStudent = false;
    }

    std::cout << "\nWrite your firstname " << firstName
              << "\nWrite your lastname: " << lastName
              << "\nWrite your age: " << age
              << "\nAre you a student? " << (isStudent ? "yes" : "no") << std::endl;

    return 0;
}


















