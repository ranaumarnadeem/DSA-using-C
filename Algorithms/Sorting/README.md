# Sorting Algorithms in C

Collection of various sorting algorithms with their implementations and complexity analysis.

## Algorithms Covered

1. **Bubble Sort** (`bubble_sort.c`)
   - Simple comparison-based algorithm
   - Time: O(n²), Space: O(1)

2. **Selection Sort** (`selection_sort.c`)
   - Finds minimum and places it at beginning
   - Time: O(n²), Space: O(1)

3. **Insertion Sort** (`insertion_sort.c`)
   - Builds sorted array one item at a time
   - Time: O(n²), Space: O(1)

4. **Merge Sort** (`merge_sort.c`)
   - Divide and conquer algorithm
   - Time: O(n log n), Space: O(n)

5. **Quick Sort** (`quick_sort.c`)
   - Divide and conquer with pivot
   - Time: O(n log n) average, O(n²) worst, Space: O(log n)

## Compilation

```bash
gcc bubble_sort.c -o bubble_sort
./bubble_sort
```

## Complexity Comparison

| Algorithm      | Best Case  | Average Case | Worst Case | Space    | Stable |
|---------------|------------|--------------|------------|----------|--------|
| Bubble Sort   | O(n)       | O(n²)        | O(n²)      | O(1)     | Yes    |
| Selection Sort| O(n²)      | O(n²)        | O(n²)      | O(1)     | No     |
| Insertion Sort| O(n)       | O(n²)        | O(n²)      | O(1)     | Yes    |
| Merge Sort    | O(n log n) | O(n log n)   | O(n log n) | O(n)     | Yes    |
| Quick Sort    | O(n log n) | O(n log n)   | O(n²)      | O(log n) | No     |

## When to Use

- **Bubble Sort**: Small datasets, educational purposes
- **Selection Sort**: Small datasets, memory constraint
- **Insertion Sort**: Small or nearly sorted datasets
- **Merge Sort**: When stable sort is needed, linked lists
- **Quick Sort**: General purpose, average case performance
