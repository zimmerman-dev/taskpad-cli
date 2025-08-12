#include <iostream>
#include <string>
#include "menu.h"

int main() {

    std::string placeholder_1 = "Feature coming soon!";
    bool running = true;

    menu();

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
