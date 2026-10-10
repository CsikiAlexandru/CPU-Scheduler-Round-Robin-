# Round Robin CPU Scheduler

A C++ application that simulates the Round Robin process scheduling algorithm.

## Overview
This project simulates basic Operating System process scheduling. It is implemented in C++ using Object-Oriented Programming (OOP) principles and `std::queue` for process queue management.

## Features
- Round Robin scheduling algorithm
- Modular design (`Proces` and `Planificator` classes)
- Input parsing from text files using `std::ifstream`
- Build management using `Makefile`

## Requirements
- `g++` (C++11 or newer)
- `make`

## Building and Running

1. **Compile the project:**
   ```bash
   make
   ```

2. **Run the executable:**
   ```bash
   ./scheduler fisier_procese.txt
   ```

3. **Clean build files:**
   ```bash
   make clean
   ```

## Input File Format
The input file contains space-separated pairs of `Process_ID` and `Burst_Time`:

```text
1 10
2 4
3 7
```