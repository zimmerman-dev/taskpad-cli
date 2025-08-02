#include <iostream>
#include <string>

int main() {

    std::string placeholder_1 = "Feature coming soon!";
    bool running = true;

    std::cout << "\n";
    std::cout << "==========================\n";
    std::cout << "TASKPAD-CLI (Session Mode)\n";
    std::cout << "==========================\n";
    std::cout << "[1] Add Task\n";
    std::cout << "[2] View Session Tasks\n";
    std::cout << "[3] View Session Summary\n";
    std::cout << "[4] Quit Session\n";

    while (running) {

        int choice {};
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << placeholder_1 << std::endl;
        } else if (choice == 2) {
            std::cout << placeholder_1 << std::endl;
        } else if (choice == 3) {
            std::cout << placeholder_1 << std::endl;
        } else if (choice == 4) {
            std::cout << "~~ Goodbye! ~~\n" << std::endl;
            running = false;
        } else {
            std::cout << "Invalid option. Try again\n";
        }
    }
    return 0;
}
