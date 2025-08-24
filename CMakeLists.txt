# Top-level CMakeLists.txt

cmake_minimum_required(VERSION 3.20)
project(taskpad-cli CXX)

# Always generate compile_commands.json (great for LSP)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Default to Debug if unspecified (nice for local dev)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

# Apply friendly debug flags for GCC/Clang
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
  # Only for Debug config:
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g3 -O0 -fno-omit-frame-pointer")
  # Make paths stable across machines (optional but nice for GDB):
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fdebug-prefix-map=${CMAKE_SOURCE_DIR}=.")
endif()

# Your targets
add_executable(taskpad-cli
  src/main.cpp
  # add other .cpp files here
)

