```markdown
# Vole Machine GUI

This repository contains the source code for the Vole Machine GUI application, developed using Qt 6 and CMake. The application provides an interface for interacting with the Vole machine functionalities.

## Project Structure

- **build/**: Contains build artifacts and output files generated by CMake.
- **.gitignore**: Updated to exclude the `build/` directory and `.vscode/` configuration files.
- **CMakeLists.txt**: The CMake configuration file that includes all necessary source files and manages the build process.
- **src/**: Contains the source code files:
  - `Vole.cpp`: Implements the core functionalities of the Vole machine.
  - `main.cpp`: The entry point for the application.
  - `mainwindow.cpp` and `mainwindow.h`: Define the main window of the GUI.
  - `mainwindow.ui`: The UI layout file for the main window.
  - `voleHeader.h`: Contains declarations for functions and classes used in the Vole machine.

## Getting Started

To build and run the project, follow these steps:

1. **Clone the repository**:
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```

2. **Create a build directory**:
   ```bash
   mkdir build
   cd build
   ```

3. **Run CMake**:
   ```bash
   cmake ..
   ```

4. **Build the project**:
   ```bash
   cmake --build .
   ```

5. **Run the application**:
   ```bash
   ./Desktop_Qt_6_8_0_MinGW_64_bit-Debug/VoleMachineGui
   ```
