# Round Robin CPU Scheduler (C++)

A C++ application that simulates the Round Robin process scheduling algorithm using Object-Oriented Programming (OOP) principles and `std::queue`.

## Overview

This project simulates Operating System process scheduling. It reads process data from an input file, executes each process according to a specified or default time quantum, and writes the step-by-step simulation results to an output file.

## Features

* **Round Robin Algorithm:** Preemptive scheduling using STL `std::queue`.
* **File Input & Output:** Reads process definitions from an input file and logs execution results to a specified output file.
* **Configurable Quantum:** Quantum size can be specified via command-line arguments (defaults to `3` if omitted).
* **Modular Design:** Clean separation of concerns with `proces` and `planificator` classes.
* **Build Automation:** Managed via `Makefile`.

## Requirements

* `g++` (C++11 compiler or newer)
* `make`

## Building and Running

1. **Compile the project:**

   ```bash
   make
   ```

2. **Run the executable:**

   ```bash
   ./scheduler <fisier_intrare> <fisier_iesire> [cuanta_timp]
   ```

   **Examples:**

   Run with default quantum (3):
   ```bash
   ./scheduler procese.txt rezultate.txt
   ```

   Run with custom quantum (e.g., 5):
   ```bash
   ./scheduler procese.txt rezultate.txt 5
   ```

3. **Clean build files:**

   ```bash
   make clean
   ```

## Input File Format

The input file contains space-separated pairs of `Process_ID` and `Execution_Time` on each line:

```text
1 10
2 4
3 7
```