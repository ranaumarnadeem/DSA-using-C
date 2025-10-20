# Searching Algorithms in C

Collection of various searching algorithms with implementations and analysis.

## Algorithms Covered

1. **Linear Search** (`linear_search.c`)
   - Sequential search through array
   - Time: O(n), Space: O(1)

2. **Binary Search** (`binary_search.c`)
   - Divide and conquer on sorted array
   - Time: O(log n), Space: O(1)

## Compilation

```bash
gcc binary_search.c -o binary_search
./binary_search
```

## Complexity Comparison

| Algorithm      | Time Complexity | Space Complexity | Prerequisite  |
|---------------|----------------|------------------|---------------|
| Linear Search | O(n)           | O(1)             | None          |
| Binary Search | O(log n)       | O(1) iterative   | Sorted array  |
|               |                | O(log n) recursive|              |

## When to Use

- **Linear Search**: Unsorted data, small datasets
- **Binary Search**: Sorted data, large datasets
