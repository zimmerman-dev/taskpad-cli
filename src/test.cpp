#include <iostream>
#include <limits>

enum TaskOption : char {
    Add = 'A',
    View = 'V',
    Summary = 'S',
    Quit = 'Q'
};

int main() {
    char userChoice {};
    TaskOption choice {};
    bool running {true};

    while (running) {
        std::cout << "\n";
        std::cout << "==========================\n";
        std::cout << "TASKPAD-CLI (Session Mode)\n";
        std::cout << "==========================\n";
        std::cout << "[A] Add Task\n";
        std::cout << "[V] View Session Tasks\n";
        std::cout << "[S] View Session Summary\n";
        std::cout << "[Q] Quit Session\n";
        std::cout << "\nEnter character: ";
        std::cin >> userChoice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        userChoice = std::toupper(userChoice);

        choice = static_cast<TaskOption>(userChoice);

        switch (choice) {
            case Add: std::cout << "\nAdd a Task\n";
                break;
            case View: std::cout << "\nView current Tasks\n";
                break;
            case Summary: std::cout << "\nView Task Summary\n";
                break;
            case Quit: std::cout << "\nQuit\n";
                running = false;
                break;
            default: std::cout << "\nInvalid option...\n";
        }
    }
    return 0;
}
