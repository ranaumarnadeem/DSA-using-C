#include <stdio.h>

/**
 * Merge Sort Algorithm
 * Time Complexity: O(n log n) in all cases
 * Space Complexity: O(n)
 * Stable: Yes
 * 
 * Divide and conquer algorithm that divides array into halves,
 * recursively sorts them, and then merges the sorted halves
 */

/**
 * Merge two subarrays of arr[]
 * First subarray is arr[left..mid]
 * Second subarray is arr[mid+1..right]
 */
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    // Create temporary arrays
    int L[n1], R[n2];
    
    // Copy data to temporary arrays
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    // Merge the temporary arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/**
 * Merge sort main function
 */
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        // Merge the sorted halves
        merge(arr, left, mid, right);
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
    printf("=== Merge Sort Demo ===\n\n");
    
    // Test case 1: Random array
    int arr1[] = {38, 27, 43, 3, 9, 82, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Original array: ");
    printArray(arr1, n1);
    
    mergeSort(arr1, 0, n1 - 1);
    
    printf("Sorted array:   ");
    printArray(arr1, n1);
    
    // Test case 2: Large array
    printf("\n--- Test with larger array ---\n");
    int arr2[] = {64, 34, 25, 12, 22, 11, 90, 88, 45, 50, 33, 17, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Original array: ");
    printArray(arr2, n2);
    
    mergeSort(arr2, 0, n2 - 1);
    
    printf("Sorted array:   ");
    printArray(arr2, n2);
    
    return 0;
}
