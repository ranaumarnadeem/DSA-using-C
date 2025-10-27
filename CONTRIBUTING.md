# Contributing to DSA-using-C

Thank you for your interest in contributing to this repository! This guide will help you add new implementations and improvements.

## How to Contribute

### Adding a New Data Structure

1. Navigate to the appropriate directory under `DataStructures/`
2. Create a new `.c` file with a descriptive name (e.g., `queue_array.c`)
3. Follow the coding style used in existing implementations
4. Include:
   - Header comments explaining the data structure
   - Time and space complexity annotations
   - A `main()` function with demonstration/test cases
   - Clear function documentation

### Adding a New Algorithm

1. Navigate to the appropriate directory under `Algorithms/`
2. Create a new `.c` file with a descriptive name (e.g., `quick_sort.c`)
3. Include:
   - Algorithm description and complexity analysis
   - Well-commented implementation
   - Test cases showing different scenarios
   - Comparison with related algorithms (if applicable)

### Adding a Practice Problem

1. Choose the appropriate difficulty level directory under `Problems/`
2. Create a new `.c` file with a problem-based name (e.g., `two_sum.c`)
3. Include:
   - Problem statement at the top
   - Approach/solution explanation
   - Time and space complexity
   - Multiple test cases
   - Edge cases

### Code Style Guidelines

```c
/**
 * Function description
 * Time Complexity: O(?)
 * Space Complexity: O(?)
 */
void functionName(int param) {
    // Implementation
}
```

- Use meaningful variable and function names
- Add comments for complex logic
- Follow consistent indentation (4 spaces)
- Include time and space complexity annotations
- Write self-documenting code when possible

### Testing Your Code

Before submitting:

1. Compile your code with warnings enabled:
   ```bash
   gcc -Wall -Wextra -std=c99 your_file.c -o your_program
   ```

2. Ensure there are no warnings or errors

3. Test with multiple inputs including edge cases

4. If adding to the Makefile, test the build system:
   ```bash
   make clean
   make all
   ```

### Updating Documentation

- Update the README.md in the relevant directory
- Add your implementation to the list of covered topics
- Include compilation instructions if different from standard
- Update the main README.md if adding a new category

### Pull Request Process

1. Fork the repository
2. Create a new branch for your feature
3. Make your changes following the guidelines above
4. Test thoroughly
5. Update relevant documentation
6. Submit a pull request with a clear description

### What We're Looking For

- **Correctness**: Code should work as intended
- **Clarity**: Code should be easy to understand
- **Completeness**: Include test cases and documentation
- **Consistency**: Follow existing patterns and style
- **Efficiency**: Use appropriate time/space complexity

### Ideas for Contributions

- Implement missing data structures (Queues, Trees, Graphs, Hash Tables)
- Add more sorting algorithms (Quick Sort, Heap Sort, etc.)
- Include dynamic programming problems
- Add graph algorithms (BFS, DFS, Dijkstra, etc.)
- Improve existing implementations
- Add more comprehensive test cases
- Fix bugs or optimize code
- Improve documentation

## Questions?

If you have questions or need clarification, feel free to:
- Open an issue
- Start a discussion
- Review existing implementations for examples

Thank you for contributing to DSA-using-C! 🚀
