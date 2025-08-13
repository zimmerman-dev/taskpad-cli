#include <iostream>
#include <string>
#include <limits>
#include "menu.h"
#include "addTask.h"

int main() {

    std::string placeholder_1 = "Feature coming soon!";
    bool running = true;

    menu();

    while (running) {

        int choice {};
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

        if (choice == 1) {
            std::vector<std::string> task;
            std::vector<std::string> prio;
            std::vector<int> time_to_complete;

            addTask(task, prio, time_to_complete);

        } else if (choice == 2) {
            std::cout << placeholder_1 << std::endl;
        } else if (choice == 3) {
            std::cout << placeholder_1 << std::endl;
        } else if (choice == 4) {
            std::cout << "~~ Goodbye! ~~\n" << std::endl;
            running = false;
        } else {
            std::cout << "Invalid option. Try again\n";
            break;
        }
    }
    return 0;
}
