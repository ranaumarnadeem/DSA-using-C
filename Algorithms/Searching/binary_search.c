#include <stdio.h>
#include <math.h>

/**
 * Binary Search (Iterative)
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 * 
 * Works on sorted arrays by repeatedly dividing search interval in half
 */
int binarySearchIterative(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if target is at mid
        if (arr[mid] == target) {
            return mid;
        }
        
        // If target is greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    
    // Element not found
    return -1;
}

/**
 * Binary Search (Recursive)
 * Time Complexity: O(log n)
 * Space Complexity: O(log n) due to recursion stack
 */
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If element is present at middle
        if (arr[mid] == target) {
            return mid;
        }
        
        // If element is smaller than mid, search left subarray
        if (arr[mid] > target) {
            return binarySearchRecursive(arr, left, mid - 1, target);
        }
        
        // Else search right subarray
        return binarySearchRecursive(arr, mid + 1, right, target);
    }
    
    // Element not found
    return -1;
}

/**
 * Linear Search (for comparison)
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

/**
 * Print array elements
 */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("=== Binary Search Demo ===\n\n");
    
    // Sorted array (prerequisite for binary search)
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Sorted array: ");
    printArray(arr, n);
    
    // Test binary search (iterative)
    printf("\n--- Iterative Binary Search ---\n");
    int target = 23;
    printf("Searching for %d: ", target);
    int result = binarySearchIterative(arr, n, target);
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("Not found\n");
    }
    
    target = 50;
    printf("Searching for %d: ", target);
    result = binarySearchIterative(arr, n, target);
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("Not found\n");
    }
    
    // Test binary search (recursive)
    printf("\n--- Recursive Binary Search ---\n");
    target = 45;
    printf("Searching for %d: ", target);
    result = binarySearchRecursive(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("Not found\n");
    }
    
    target = 100;
    printf("Searching for %d: ", target);
    result = binarySearchRecursive(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("Not found\n");
    }
    
    // Compare with linear search
    printf("\n--- Performance Comparison ---\n");
    printf("For array of size %d:\n", n);
    printf("Binary Search: O(log n) = O(log %d) ≈ %d comparisons\n", n, (int)(log2(n) + 1));
    printf("Linear Search: O(n) = O(%d) comparisons\n", n);
    
    return 0;
}
