# Stacks in C

A Stack is a linear data structure that follows the Last In First Out (LIFO) principle.

## Topics Covered

1. **Array-based Stack** (`stack_array.c`)
   - Push operation
   - Pop operation
   - Peek/Top operation
   - isEmpty and isFull checks

## Compilation

```bash
gcc stack_array.c -o stack_array
./stack_array
```

## Time Complexity

| Operation | Time Complexity |
|-----------|----------------|
| Push      | O(1)           |
| Pop       | O(1)           |
| Peek      | O(1)           |
| isEmpty   | O(1)           |
| isFull    | O(1)           |

## Space Complexity

O(n) where n is the maximum capacity

## Applications

- Function call stack
- Expression evaluation
- Backtracking algorithms
- Undo mechanisms in editors
- Browser history
