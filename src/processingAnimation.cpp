#include <iostream>
#include <thread>
#include "processingAnimation.h"

void processingAnimation() {
    std::cout << "[Processing Request";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "." << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "." << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "✓]\n";
};


