#include <stdio.h>
#include <stdbool.h>

/**
 * Bubble Sort Algorithm
 * Time Complexity: O(n²) worst and average case, O(n) best case
 * Space Complexity: O(1)
 * Stable: Yes
 * 
 * Works by repeatedly swapping adjacent elements if they are in wrong order
 */
void bubbleSort(int arr[], int n) {
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        // If no swapping happened, array is already sorted
        if (!swapped) {
            break;
        }
    }
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
    printf("=== Bubble Sort Demo ===\n\n");
    
    // Test case 1: Random array
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Original array: ");
    printArray(arr1, n1);
    
    bubbleSort(arr1, n1);
    
    printf("Sorted array:   ");
    printArray(arr1, n1);
    
    // Test case 2: Already sorted array
    printf("\n--- Test with already sorted array ---\n");
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Original array: ");
    printArray(arr2, n2);
    
    bubbleSort(arr2, n2);
    
    printf("Sorted array:   ");
    printArray(arr2, n2);
    
    // Test case 3: Reverse sorted array
    printf("\n--- Test with reverse sorted array ---\n");
    int arr3[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("Original array: ");
    printArray(arr3, n3);
    
    bubbleSort(arr3, n3);
    
    printf("Sorted array:   ");
    printArray(arr3, n3);
    
    return 0;
}
