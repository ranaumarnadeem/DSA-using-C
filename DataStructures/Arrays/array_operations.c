#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

/**
 * Display array elements
 */
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/**
 * Insert element at a specific position
 * Time Complexity: O(n)
 */
int insertElement(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full!\n");
        return 0;
    }
    
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return 0;
    }
    
    // Shift elements to the right
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[position] = element;
    (*size)++;
    return 1;
}

/**
 * Delete element at a specific position
 * Time Complexity: O(n)
 */
int deleteElement(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty!\n");
        return 0;
    }
    
    if (position < 0 || position >= *size) {
        printf("Invalid position!\n");
        return 0;
    }
    
    // Shift elements to the left
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    (*size)--;
    return 1;
}

/**
 * Linear search for an element
 * Time Complexity: O(n)
 */
int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

/**
 * Find maximum element
 * Time Complexity: O(n)
 */
int findMax(int arr[], int size) {
    if (size == 0) return -1;
    
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

/**
 * Find minimum element
 * Time Complexity: O(n)
 */
int findMin(int arr[], int size) {
    if (size == 0) return -1;
    
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

/**
 * Reverse the array
 * Time Complexity: O(n)
 */
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};
    int size = 5;
    
    printf("=== Array Operations Demo ===\n\n");
    
    // Display initial array
    printf("Initial array:\n");
    displayArray(arr, size);
    
    // Insert element
    printf("\nInserting 25 at position 2:\n");
    insertElement(arr, &size, 25, 2);
    displayArray(arr, size);
    
    // Search for element
    printf("\nSearching for element 30:\n");
    int pos = searchElement(arr, size, 30);
    if (pos != -1) {
        printf("Element 30 found at index %d\n", pos);
    } else {
        printf("Element not found\n");
    }
    
    // Find max and min
    printf("\nMaximum element: %d\n", findMax(arr, size));
    printf("Minimum element: %d\n", findMin(arr, size));
    
    // Delete element
    printf("\nDeleting element at position 3:\n");
    deleteElement(arr, &size, 3);
    displayArray(arr, size);
    
    // Reverse array
    printf("\nReversing the array:\n");
    reverseArray(arr, size);
    displayArray(arr, size);
    
    return 0;
}
