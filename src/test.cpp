#include <iostream>

enum Option {Add = 1, View, Summary};

int main() {
    int userChoice;
    Option choice;

    std::cout << "Welcome to TASKPAD CLI\n";
    std::cout << "1. Add task\n2. View all tasks\n3. View current tasks\n";
    std::cout << "Choose an option to continue: ";
    std::cin >> userChoice;
    choice = static_cast<Option>(userChoice);

    switch (choice) {
        case Add: std::cout << "You chose to add a task!\n";
            break;
        case View: std::cout << "You chose to view all tasks!\n";
            break;
        case Summary: std::cout << "You chose to view current task summary\n";
            break;
        default: std::cout << "Not a valid option\n";
            break;
    }
    return 0;
}
