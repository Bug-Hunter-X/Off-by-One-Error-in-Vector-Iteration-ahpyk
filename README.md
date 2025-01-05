# Off-by-One Error in C++ Vector Iteration
This repository demonstrates a common off-by-one error in C++ when iterating through a `std::vector`.  The error occurs when the loop condition `i <= vec.size()` is used, causing an attempt to access an element beyond the valid range of the vector.

## Bug Description
The provided code iterates through a vector using a `for` loop. The loop condition `i <= vec.size()` is incorrect; it should be `i < vec.size()`.  Accessing `vec[vec.size()]` leads to undefined behavior, potentially causing a crash or unexpected results.

## Solution
The solution corrects the loop condition to `i < vec.size()`, ensuring that the loop iterates only over valid indices of the vector.