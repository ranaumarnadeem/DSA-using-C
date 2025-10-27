# Linked Lists in C

Linked Lists are dynamic data structures consisting of nodes where each node contains data and a pointer to the next node.

## Topics Covered

1. **Singly Linked List** (`singly_linked_list.c`)
   - Node creation
   - Insertion (beginning, end, at position)
   - Deletion (beginning, end, at position)
   - Traversal
   - Search
   - Reverse

2. **Doubly Linked List** (`doubly_linked_list.c`)
   - Bidirectional traversal
   - Insert and delete operations

## Compilation

```bash
gcc singly_linked_list.c -o singly_linked_list
./singly_linked_list
```

## Time Complexity

| Operation          | Time Complexity |
|-------------------|----------------|
| Access            | O(n)           |
| Search            | O(n)           |
| Insert (beginning)| O(1)           |
| Insert (end)      | O(n)           |
| Delete (beginning)| O(1)           |
| Delete (end)      | O(n)           |

## Space Complexity

O(n) where n is the number of nodes

## Advantages over Arrays

- Dynamic size
- Efficient insertion/deletion at beginning
- No memory wastage

## Disadvantages

- No random access
- Extra memory for pointers
- Not cache friendly
