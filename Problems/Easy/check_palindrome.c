#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * Problem: Check if a String is a Palindrome
 * 
 * A palindrome is a string that reads the same backward as forward.
 * 
 * Example:
 * Input:  "racecar"
 * Output: true
 * 
 * Input:  "hello"
 * Output: false
 * 
 * Approach:
 * - Use two pointers: left and right
 * - Compare characters at both positions
 * - Move pointers towards center
 * - If any mismatch, not a palindrome
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        // Skip non-alphanumeric characters from left
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        
        // Skip non-alphanumeric characters from right
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        
        // Compare characters (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

int main() {
    printf("=== Palindrome Check Problem ===\n\n");
    
    // Test cases
    char* testCases[] = {
        "racecar",
        "hello",
        "madam",
        "A man a plan a canal Panama",
        "programming",
        "noon",
        "level",
        ""
    };
    
    int numTests = sizeof(testCases) / sizeof(testCases[0]);
    
    for (int i = 0; i < numTests; i++) {
        printf("String: \"%s\"\n", testCases[i]);
        printf("Is palindrome? %s\n\n", 
               isPalindrome(testCases[i]) ? "Yes" : "No");
    }
    
    return 0;
}
