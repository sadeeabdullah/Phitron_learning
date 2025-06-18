# STL and Vector Notes

## Standard Template Library (STL)

The Standard Template Library (STL) is a powerful set of C++ template classes that provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures.

### Key Features of STL:
- **Templates-based**: Works with any data type
- **Container classes**: For storing collections of objects (vector, list, map, etc.)
- **Algorithms**: For operations on containers (sorting, searching, etc.)
- **Iterators**: For traversing container elements
- **Function objects**: For custom operations

STL components are highly optimized and provide efficient implementations of common data structures and algorithms.

## Vector Container

The `vector` is one of the most commonly used STL containers that provides dynamic array functionality.

### How Vector Works Behind the Scenes:
- Implements a **dynamic array** that automatically resizes
- Stores elements in **contiguous memory** locations
- Uses **templates** to work with any data type
- Automatically manages memory allocation/deallocation

### Key Features:
| Feature          | Description |
|------------------|-------------|
| Dynamic sizing   | Grows/shrinks automatically as needed |
| Random access   | O(1) access time for any element |
| Size tracking   | Maintains its own size information |
| Rich interface  | Provides many useful methods like `push_back()`, `pop_back()`, etc. |

### Performance Characteristics:
| Operation       | Time Complexity |
|----------------|------------------|
| Access         | O(1)            |
| Insert/Delete at end | O(1) amortized |
| Insert/Delete in middle | O(n)      |

### Example Usage:
```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> nums;  // Create empty vector
    
    nums.push_back(10);     // Add elements
    nums.push_back(20);
    nums.push_back(30);
    
    for (int num : nums) {  // Range-based for loop
        std::cout << num << " ";
    }
    
    return 0;
}