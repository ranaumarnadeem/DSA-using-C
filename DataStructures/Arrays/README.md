# Arrays in C

Arrays are the most fundamental data structure, consisting of a contiguous block of memory locations.

## Topics Covered

1. **Basic Array Operations** (`array_operations.c`)
   - Initialization
   - Insertion
   - Deletion
   - Searching
   - Traversal

2. **Dynamic Arrays** (`dynamic_array.c`)
   - Dynamic memory allocation
   - Resizing arrays
   - Managing capacity

## Compilation

```bash
gcc array_operations.c -o array_operations
./array_operations
```

## Time Complexity

| Operation | Time Complexity |
|-----------|----------------|
| Access    | O(1)           |
| Search    | O(n)           |
| Insertion | O(n)           |
| Deletion  | O(n)           |

## Space Complexity

O(n) where n is the number of elements
