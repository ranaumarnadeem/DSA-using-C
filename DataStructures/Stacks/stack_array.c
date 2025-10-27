#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

/**
 * Stack structure using array
 */
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

/**
 * Initialize stack
 */
void initStack(Stack* stack) {
    stack->top = -1;
}

/**
 * Check if stack is empty
 * Time Complexity: O(1)
 */
bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

/**
 * Check if stack is full
 * Time Complexity: O(1)
 */
bool isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

/**
 * Push element onto stack
 * Time Complexity: O(1)
 */
bool push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return false;
    }
    
    stack->items[++stack->top] = value;
    printf("Pushed %d onto stack\n", value);
    return true;
}

/**
 * Pop element from stack
 * Time Complexity: O(1)
 */
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    }
    
    return stack->items[stack->top--];
}

/**
 * Peek at top element without removing
 * Time Complexity: O(1)
 */
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    
    return stack->items[stack->top];
}

/**
 * Get current size of stack
 * Time Complexity: O(1)
 */
int size(Stack* stack) {
    return stack->top + 1;
}

/**
 * Display stack contents
 */
void display(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack (top to bottom): ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main() {
    Stack stack;
    initStack(&stack);
    
    printf("=== Stack Operations Demo ===\n\n");
    
    // Push elements
    printf("Pushing elements onto stack:\n");
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);
    
    printf("\nCurrent stack:\n");
    display(&stack);
    
    // Peek
    printf("\nTop element (peek): %d\n", peek(&stack));
    
    // Size
    printf("Stack size: %d\n", size(&stack));
    
    // Pop elements
    printf("\nPopping elements:\n");
    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));
    
    printf("\nStack after popping:\n");
    display(&stack);
    
    // Push more elements
    printf("\nPushing more elements:\n");
    push(&stack, 60);
    push(&stack, 70);
    
    printf("\nFinal stack:\n");
    display(&stack);
    
    // Test isEmpty
    printf("\nIs stack empty? %s\n", isEmpty(&stack) ? "Yes" : "No");
    
    // Pop all elements
    printf("\nPopping all elements:\n");
    while (!isEmpty(&stack)) {
        printf("Popped: %d\n", pop(&stack));
    }
    
    printf("\nIs stack empty? %s\n", isEmpty(&stack) ? "Yes" : "No");
    
    // Try to pop from empty stack
    printf("\nTrying to pop from empty stack:\n");
    pop(&stack);
    
    return 0;
}
