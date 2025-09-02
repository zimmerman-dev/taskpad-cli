#ifndef TASKDATA_H
#define TASKDATA_H

#include <iostream>
#include <vector>


struct Task {
    std::string name;
    std::string summary;
    int completionTime;
    std::vector<std::string> subtask;
    bool completed {};
};

#endif


