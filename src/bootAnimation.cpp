#include <iostream>
#include <thread>
#include "bootAnimation.h"

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


