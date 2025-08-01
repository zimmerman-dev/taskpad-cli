<p align="center">
    <img src="assets/cpp-template.jpg" alt="cpp-template logo">
</p>

This is a minimal cross-platform C++17+ project template using CMake. It's designed as a professional-grade starting point for C++ projects, especially useful for beginners and intermediate developers who want a simple, clean build system.

---

## About This Template

This template is configured for **C++ projects only** (`LANGUAGES CXX`). It does not support C, Python, or other languages.

### Features
- Cross-platform (Linux, macOS, Windows)
- Minimal `main.cpp` entry point
- Clean, modern CMake build system
- Commented lines to support future scaling
- Organized layout: `src/`, `include/`, `external/`, `assets/`
- Compatible with language servers (e.g., Clangd)

---

## Project Layout

```text
cpp-template/
+-- CMakeLists.txt     # Top-level build config
+-- README.md          # Project documentation
+-- LICENSE            # MIT License
+-- .gitignore         # Ignores build files, binaries, and metadata
+-- src/               # Source files (main.cpp entry point)
+-- include/           # (Optional) Public headers
+-- external/          # (Optional) Vendored third-party libraries
+-- assets/            # Images, diagrams, or documentation media
+-- build/             # CMake build output (ignored by Git)
```

---

## Getting Started

### 1. Clone the Project

```bash
git clone https://github.com/<your-username>/cpp-template.git
cd cpp-template
```

### 2. Rename the Project

Edit `CMakeLists.txt` and change this line:

```cmake
project(<your_project_name> LANGUAGES CXX)
```

To something like:

```cmake
project(my_app LANGUAGES CXX)
```

This sets the name of the compiled binary (e.g., `./my_app`).

---

### 3. Add Your Code

Write your code in `src/main.cpp`, or expand the `src/` directory with additional `.cpp` files.

You can also place public headers in the `include/` directory if needed.

---

## Using External Libraries

You can link libraries one of two ways:

---

### Option A: System-installed libraries

If a library is installed via your system's package manager (`dnf`, `apt`, `brew`, etc.), you can use:

```cmake
find_package(library_name REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE library_name::library_name)
```

Replace `library_name` with the name of the library and CMake target. Replace `${PROJECT_NAME}` with your actual project name.

---

### Option B: Vendored (local) libraries

To keep everything local to your project, you can clone the library source into `external/`:

```bash
git clone --depth 1 https://github.com/your/library.git external/library_name
```

Then add this to `CMakeLists.txt`:

```cmake
add_subdirectory(external/library_name)
target_link_libraries(${PROJECT_NAME} PRIVATE library_name::library_name)
```

Repeat this pattern for any additional libraries you want to include locally.

---

## Building and Running

Once you've written or updated your code in `src/`, you can build and run it:

```bash
mkdir build
cd build
cmake ..
make
./my_app  # Replace with your actual binary name
```

---

## License

This project is licensed under the MIT License. See `LICENSE` for details.
