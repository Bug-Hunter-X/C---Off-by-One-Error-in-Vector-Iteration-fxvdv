# C++ Off-by-One Error
This repository demonstrates a classic off-by-one error in C++ when iterating over a `std::vector`. The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` provides the corrected version.

The error arises from using `i <= myVector.size()` in the `for` loop condition.  `myVector.size()` returns the number of elements, but valid indices range from 0 to `size() - 1`.  Accessing `myVector[size()]` results in undefined behavior, often a crash or unexpected output.