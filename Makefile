# Makefile for DSA-using-C
# Compiles all examples and programs

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
BUILD_DIR = build

# Data Structures
DS_ARRAYS = DataStructures/Arrays/array_operations.c
DS_LINKED_LISTS = DataStructures/LinkedLists/singly_linked_list.c
DS_STACKS = DataStructures/Stacks/stack_array.c

# Algorithms
ALG_SORTING = Algorithms/Sorting/bubble_sort.c Algorithms/Sorting/merge_sort.c
ALG_SEARCHING = Algorithms/Searching/binary_search.c

# Problems
PROB_EASY = Problems/Easy/reverse_array.c Problems/Easy/check_palindrome.c

# All source files
ALL_SOURCES = $(DS_ARRAYS) $(DS_LINKED_LISTS) $(DS_STACKS) \
              $(ALG_SORTING) $(ALG_SEARCHING) $(PROB_EASY)

.PHONY: all clean data_structures algorithms problems help

all: data_structures algorithms problems
	@echo "✓ All programs compiled successfully!"

data_structures: arrays linked_lists stacks
	@echo "✓ Data structures compiled!"

algorithms: sorting searching
	@echo "✓ Algorithms compiled!"

problems: easy_problems
	@echo "✓ Problems compiled!"

# Data Structures targets
arrays:
	@mkdir -p $(BUILD_DIR)
	@echo "Compiling Arrays..."
	$(CC) $(CFLAGS) $(DS_ARRAYS) -o $(BUILD_DIR)/array_operations

linked_lists:
	@mkdir -p $(BUILD_DIR)
	@echo "Compiling Linked Lists..."
	$(CC) $(CFLAGS) $(DS_LINKED_LISTS) -o $(BUILD_DIR)/singly_linked_list

stacks:
	@mkdir -p $(BUILD_DIR)
	@echo "Compiling Stacks..."
	$(CC) $(CFLAGS) $(DS_STACKS) -o $(BUILD_DIR)/stack_array -lm

# Algorithms targets
sorting:
	@mkdir -p $(BUILD_DIR)
	@echo "Compiling Sorting algorithms..."
	$(CC) $(CFLAGS) Algorithms/Sorting/bubble_sort.c -o $(BUILD_DIR)/bubble_sort
	$(CC) $(CFLAGS) Algorithms/Sorting/merge_sort.c -o $(BUILD_DIR)/merge_sort

searching:
	@mkdir -p $(BUILD_DIR)
	@echo "Compiling Searching algorithms..."
	$(CC) $(CFLAGS) Algorithms/Searching/binary_search.c -o $(BUILD_DIR)/binary_search -lm

# Problems targets
easy_problems:
	@mkdir -p $(BUILD_DIR)
	@echo "Compiling Easy problems..."
	$(CC) $(CFLAGS) Problems/Easy/reverse_array.c -o $(BUILD_DIR)/reverse_array
	$(CC) $(CFLAGS) Problems/Easy/check_palindrome.c -o $(BUILD_DIR)/check_palindrome

# Clean build artifacts
clean:
	@echo "Cleaning build directory..."
	@rm -rf $(BUILD_DIR)
	@find . -name "*.o" -type f -delete
	@find . -name "a.out" -type f -delete
	@echo "✓ Clean complete!"

# Help target
help:
	@echo "DSA-using-C Makefile"
	@echo ""
	@echo "Available targets:"
	@echo "  make all            - Compile all programs"
	@echo "  make data_structures- Compile all data structure implementations"
	@echo "  make algorithms     - Compile all algorithm implementations"
	@echo "  make problems       - Compile all problem solutions"
	@echo "  make clean          - Remove all build artifacts"
	@echo "  make help           - Show this help message"
	@echo ""
	@echo "Individual targets:"
	@echo "  make arrays         - Compile array operations"
	@echo "  make linked_lists   - Compile linked list implementations"
	@echo "  make stacks         - Compile stack implementations"
	@echo "  make sorting        - Compile sorting algorithms"
	@echo "  make searching      - Compile searching algorithms"
	@echo "  make easy_problems  - Compile easy problems"
	@echo ""
	@echo "Executables are placed in the 'build/' directory"
