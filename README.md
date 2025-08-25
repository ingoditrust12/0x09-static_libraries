# 0x09 Static Libraries Project

## Table of Contents
- [Project Overview](#project-overview)
- [Getting Started](#getting-started)
- [Files and Structure](#files-and-structure)
- [How to Compile](#how-to-compile)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

---

## Project Overview
This project is part of the ALX/holbertonschool C curriculum and focuses on creating a **static library** in C.  
It includes custom implementations of common functions like `_putchar`, `_puts`, and `_strlen`, which are then compiled into a static library `libmy.a` that can be reused in other C programs.

---

## Getting Started
To use this project:

1. Clone the repository:

```bash
git clone git@github.com:ingoditrust12/0x09-static_libraries.git
cd 0x09-static_libraries


2. Ensure you have gcc installed on your system.

Files0x09-static_libraries/
├── _putchar.c       # Outputs a character to stdout
├── _puts.c          # Outputs a string to stdout using _putchar
├── _strlen.c        # Returns the length of a string
├── libmy.a          # Compiled static library
├── main.c           # Example program using the library
├── main.h           # Header file with function prototypes
└── test             # Optional test program/output

3. How to compile:
gcc -c _putchar.c _puts.c _strlen.c
ar rcs libmy.a _putchar.o _puts.o _strlen.o
gcc main.c -L. -lmy -o test
./test

Usage:
Include main.h in your programs to access the functions from the static library


