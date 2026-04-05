#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *newNode;

    // Create first node
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 20;
    head->next = NULL;

    // Insert new node at beginning
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 10;

    newNode->next = head;  // link new node to old head
    head = newNode;        // update head

    // Traversal
    struct Node *ptr = head;

    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
