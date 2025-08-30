#include <iostream>
#include <limits>
#include <chrono>
#include <thread>
#include "menu.h"
#include "bootAnimation.h"
#include "processingAnimation.h"

enum TaskOption : char {
	Add = 'A', View = 'V',
	Summary = 'S', Quit = 'Q'
};

int main() {
    char userChoice {};
    TaskOption choice {};
    bool running = true;

    bootAnimation();

    while (running)
    {
        menu();
        std::cin >> userChoice;
        processingAnimation();
        running = false;
    }
    return 0;
}
