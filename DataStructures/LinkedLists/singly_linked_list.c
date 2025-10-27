#include <stdio.h>
#include <stdlib.h>

/**
 * Node structure for singly linked list
 */
typedef struct Node {
    int data;
    struct Node* next;
} Node;

/**
 * Create a new node
 */
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/**
 * Insert node at the beginning
 * Time Complexity: O(1)
 */
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

/**
 * Insert node at the end
 * Time Complexity: O(n)
 */
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

/**
 * Insert node at a specific position (0-indexed)
 * Time Complexity: O(n)
 */
void insertAtPosition(Node** head, int data, int position) {
    if (position == 0) {
        insertAtBeginning(head, data);
        return;
    }
    
    Node* newNode = createNode(data);
    Node* temp = *head;
    
    for (int i = 0; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Position out of bounds!\n");
        free(newNode);
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
}

/**
 * Delete node from beginning
 * Time Complexity: O(1)
 */
void deleteFromBeginning(Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

/**
 * Delete node from end
 * Time Complexity: O(n)
 */
void deleteFromEnd(Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    
    Node* temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = NULL;
}

/**
 * Delete node at a specific position (0-indexed)
 * Time Complexity: O(n)
 */
void deleteAtPosition(Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    if (position == 0) {
        deleteFromBeginning(head);
        return;
    }
    
    Node* temp = *head;
    for (int i = 0; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds!\n");
        return;
    }
    
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
}

/**
 * Search for an element
 * Time Complexity: O(n)
 */
int search(Node* head, int key) {
    Node* temp = head;
    int position = 0;
    
    while (temp != NULL) {
        if (temp->data == key) {
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}

/**
 * Reverse the linked list
 * Time Complexity: O(n)
 */
void reverse(Node** head) {
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    *head = prev;
}

/**
 * Display the linked list
 * Time Complexity: O(n)
 */
void displayList(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/**
 * Get the length of the list
 * Time Complexity: O(n)
 */
int getLength(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

/**
 * Free all nodes in the list
 */
void freeList(Node** head) {
    Node* temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;
    
    printf("=== Singly Linked List Demo ===\n\n");
    
    // Insert elements
    printf("Inserting elements at end: 10, 20, 30, 40, 50\n");
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    displayList(head);
    
    // Insert at beginning
    printf("\nInserting 5 at beginning:\n");
    insertAtBeginning(&head, 5);
    displayList(head);
    
    // Insert at position
    printf("\nInserting 25 at position 4:\n");
    insertAtPosition(&head, 25, 4);
    displayList(head);
    
    // Get length
    printf("\nLength of list: %d\n", getLength(head));
    
    // Search
    printf("\nSearching for element 30:\n");
    int pos = search(head, 30);
    if (pos != -1) {
        printf("Element 30 found at position %d\n", pos);
    } else {
        printf("Element not found\n");
    }
    
    // Delete from beginning
    printf("\nDeleting from beginning:\n");
    deleteFromBeginning(&head);
    displayList(head);
    
    // Delete from end
    printf("\nDeleting from end:\n");
    deleteFromEnd(&head);
    displayList(head);
    
    // Delete at position
    printf("\nDeleting at position 2:\n");
    deleteAtPosition(&head, 2);
    displayList(head);
    
    // Reverse
    printf("\nReversing the list:\n");
    reverse(&head);
    displayList(head);
    
    // Free memory
    freeList(&head);
    printf("\nMemory freed successfully!\n");
    
    return 0;
}
