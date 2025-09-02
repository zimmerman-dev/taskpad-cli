#include "taskData.h"
#include <iostream>
#include <vector>

void userInput(std::string& queryTask) {

    std::cin >> queryTask;
}

int main() {

    Task newTask;

    std::cout << "Enter your task name: ";
    userInput(newTask.name);
    std::cout << newTask.name;
    return 0;
}
