#include <iostream>
#include <string>
#include <vector>
#include <limits>

void addTask(std::vector<std::string> task, std::vector<std::string> prio, std::vector<int> time_to_complete) {

    std::string input_task;
    std::string input_prio;
    int input_ttc {};

    std::cout << "Enter task name: ";
    std::getline(std::cin, input_task);
    task.push_back(input_task);

    std::cout << "Enter task priority level - High, Medium, Low: ";
    std::getline(std::cin, input_prio);
    prio.push_back(input_prio);

    std::cout << "Enter task estimated time to completion: ";
    std::cin >> input_ttc;
    time_to_complete.push_back(input_ttc);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "\nTask: " << task.back() << " flagged " << prio.back() << " priority. ";
    std::cout << "You have " << time_to_complete.back() << " minutes to complete.\n";
}

