# EECS 348 – Lab 13: Debugging and Testing

This project demonstrates the difference between a **fault**, **error state**, and **failure** using a buggy C++ function that checks student attendance. The program tests three specific attendance cases and prints whether the buggy `faillecture()` function behaves correctly or incorrectly compared to expected results.

The repository contains:
- `lab13.cpp` — main program containing the buggy function and tests
- `Makefile` — build configuration for compiling and cleaning
- `README.md` — documentation for compilation, execution, test behavior, and known details

---

## How to Compile and Run

### Build the Program
Use the Makefile:

make

This produces:

lab13.exe

---

### Run the Program

./lab13.exe

This prints the results of three test cases demonstrating:
- a case that executes the fault but does not produce an error state
- a case that produces an error state but no failure
- a case that results in a failure

---

### Clean the Build

Remove the compiled executable:

make clean
