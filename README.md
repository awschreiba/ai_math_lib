# Mini AI Math Library

A lightweight, high-performance C++ library implementing foundational mathematical operations for neural networks. This project serves as a proof of concept for low-level system design, memory-safe matrix operations, and automated unit testing.

## Overview
While modern deep learning frameworks (like TensorFlow or PyTorch) abstract away the underlying mathematics, this project demonstrates a fundamental understanding of the core algebraic operations and activation functions that power AI models, implemented from scratch in modern C++.

## Features
* **Matrix Operations:** Defensive implementation of Matrix Dot Product with dimension validation.
* **Activation Functions:** In-place mathematical transformations including `ReLU` and `Sigmoid`.
* **Robust Architecture:** Managed via `CMake` for cross-platform builds.
* **Automated Testing:** Comprehensive unit test suite powered by `GoogleTest (GTest)`, ensuring mathematical accuracy and exception handling for invalid tensor dimensions.

## Tech Stack
* **Language:** C++17
* **Build System:** CMake (v3.14+)
* **Testing Framework:** GoogleTest (GTest)

## Build and Run
This project uses CMake. To build and run the tests on your local machine:

```bash
# 1. Clone the repository
git clone [https://github.com/awschreiba/ai_math_lib.git](https://github.com/awschreiba/ai_math_lib.git)
cd ai_math_lib

# 2. Configure the project
cmake -S . -B build

# 3. Build the project
cmake --build build

# 4. Run the automated tests
./build/Debug/run_tests.exe