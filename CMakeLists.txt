cmake_minimum_required(VERSION 3.16)

# -------------------------------
# Project Configuration
# -------------------------------

# Set your project name — this becomes the output binary name
project(taskpad-cli LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -------------------------------
# External Dependencies (System)
# -------------------------------

# Use find_package() for system-installed libraries
# Example:
# find_package(spdlog REQUIRED)
# target_link_libraries(${PROJECT_NAME} PRIVATE spdlog::spdlog)

# -------------------------------
# External Dependencies (Vendored)
# -------------------------------

# Use add_subdirectory() if you include third-party code in your project tree
# Example:
# add_subdirectory(external/fmt)
# target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)

# -------------------------------
# Build Targets
# -------------------------------

# Define your main executable
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/menu.cpp
    src/addTask.cpp
)

# Link additional libraries here
# target_link_libraries(${PROJECT_NAME}
#    PRIVATE
#        ${CMAKE_SOURCE_DIR}/src
#)
