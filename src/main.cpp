#include <iostream>
#include <limits>
#include <chrono>
#include <thread>

enum TaskOption : char {
    Add = 'A', View = 'V',
    Summary = 'S', Quit = 'Q'
};

void menu() {
    std::cout << R"(
╔══════════════════════════════════╗
║  TASKPAD-CLI Session Mode - v1   ║
╚══════════════════════════════════╝
╔══════════════════════════════════╗
║  [A] ➤ Add a New Task            ║
║  [V] ➤ View All Tasks            ║
║  [S] ➤ View Task Summary         ║
║  [Q] ➤ Quit TASKPAD.CLI          ║
╚══════════════════════════════════╝
╔══════════════════════════════════╗
║  ENTER CHARACTER AND PRESS [↵]   ║
╚══════════════════════════════════╝
»  )";
};

void bootAnimation() {
    std::cout << "[BOOTING TASKPAD-CLI";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "." << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "." << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << ".]\n";

    std::cout << "[Initializing";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "." << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "." << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << ".]\n";
};

int main() {
    int userChoice {};
    TaskOption choice {};
    bool running {true};

    bootAnimation();

    while (running) {
        menu(); // Calls the Menu header
        std::cin >> userChoice;
        running = false;
    }

    return 0;
}
