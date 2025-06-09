# C++ CLI application template

This template is intended to be used for creating C++ CLI applications.
The development environment is based on MSYS2 and Visual Studio Code on Windows.

## Setting up development environment on Windows

1. Install MSYS2 from https://www.msys2.org/

2. Launch MSYS2 UCRT64 shell and update (do it twice, if restart of the shell is required after first run):
´´´
  pacman -Syu
´´´

3. Install the toolchain and other tools and libraries:
´´´
  pacman -S base-devel mingw-w64-ucrt-x86_64-toolchain mingw-w64-ucrt-x86_64-cmake mingw-w64-ucrt-x86_64-boost mingw-w64-ucrt-x86_64-nlohmann-json mingw-w64-ucrt-x86_64-SDL2 mingw-w64-ucrt-x86_64-gtest
´´´

4. Install Visual Studio Code.

5. Install the C/++ Extension Pack for Visual Studio Code.

6. Add MSYS2 UCRT64 terminal profile to Visual Studio Code by editing settings.json:
´´´
    "terminal.integrated.profiles.windows": {
      "MSYS2 UCRT64": {
        "path": "C:\\msys64\\usr\\bin\\bash.exe",
          "args": ["--login", "-i"],
          "env": {
            "MSYSTEM": "UCRT64",
            "CHERE_INVOKING": "1",
          }
      }
  },
  "terminal.integrated.defaultProfile.windows": "MSYS2 UCRT64",
´´´

7. Add CMake path to settings.json:
´´´
  "cmake.cmakePath": "C:\\msys64\\ucrt64\\bin\\cmake.exe",
´´´

C++ development environment is ready and this template can be used to create a new project.
