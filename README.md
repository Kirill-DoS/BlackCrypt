# BlackCrypt

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Platform: Linux](https://img.shields.io/badge/Platform-Linux-lightgrey.svg)](https://ubuntu.com/)

**BlackCrypt** is a secure desktop application with a graphical user interface (GUI) for encrypting and decrypting your files, built to ensure data confidentiality. It is written in C++ using the modern QT6 framework.

## ✨ Features

*   **Simple Encryption/Decryption:** An intuitive interface for protecting your files.
*   **Graphical User Interface (GUI):** Easy to use without command-line knowledge.
*   **Cross-Platform Potential:** Built on QT6, which allows for compilation on other operating systems.
*   **Security:** Utilizes modern cryptographic algorithms (Specify which algorithm you use, e.g., AES-256).

## 📦 Build & Installation (Linux Ubuntu)

The following dependencies are required to build the project:
*   **C++ compiler** with C++17 support (e.g., `g++`)
*   **CMake** (version 3.16 or higher)
*   **QT6** (Core and Widgets modules)

Install the required dependencies on Ubuntu:
```bash
sudo apt update
sudo apt install build-essential cmake qt6-base-dev qt6-tools-dev-tools

1. Clone the repository:
```bash
git clone https://github.com/Kirill-DoS/BlackCrypt.git
cd BlackCrypt

2. Create a build directory and generate the Makefile:
```bash
mkdir build
cd build
cmake ..

3.Build the project:
```bash
make

4. (Optional) Install the application system-wide:
```bash
sudo make install


Usage:

After a successful build, the executable will be located in the build directory. You can launch it from the terminal:

# From the build/ directory
```bash
./BlackCrypt

Or find the BlackCrypt application in your system menu if you performed make install.


**How to Use the Application**

1. Launch BlackCrypt.
2. Select Mode:(encrypt/decrypt without keyfile, encrypt/decrypt with key file, generate and save key to file)
3. Start process: press button "Execute"


**Tech Stack**

*  **Programming Language: C++**
*  **GUI Framework: QT6**
*  **Build System: CMake**
*  **Cryptographic Library:**(self-written, openSSL)


**License**

Distributed under the MIT License. See the LICENSE file for more information.
