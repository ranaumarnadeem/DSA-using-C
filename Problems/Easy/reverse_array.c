#include <stdio.h>

/**
 * Problem: Reverse an Array
 * 
 * Given an array of integers, reverse it in-place.
 * 
 * Example:
 * Input:  [1, 2, 3, 4, 5]
 * Output: [5, 4, 3, 2, 1]
 * 
 * Approach:
 * - Use two pointers: start and end
 * - Swap elements at start and end
 * - Move start forward and end backward
 * - Continue until start >= end
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move pointers
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("=== Reverse Array Problem ===\n\n");
    
    // Test case 1
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Test Case 1:\n");
    printf("Original: ");
    printArray(arr1, n1);
    
    reverseArray(arr1, n1);
    
    printf("Reversed: ");
    printArray(arr1, n1);
    
    // Test case 2
    printf("\nTest Case 2:\n");
    int arr2[] = {10, 20, 30, 40, 50, 60};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Original: ");
    printArray(arr2, n2);
    
    reverseArray(arr2, n2);
    
    printf("Reversed: ");
    printArray(arr2, n2);
    
    // Test case 3: Odd number of elements
    printf("\nTest Case 3 (odd length):\n");
    int arr3[] = {7, 14, 21, 28, 35, 42, 49};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("Original: ");
    printArray(arr3, n3);
    
    reverseArray(arr3, n3);
    
    printf("Reversed: ");
    printArray(arr3, n3);
    
    return 0;
}
