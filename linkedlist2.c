#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *second, *third, *fifth;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 20;
    second->next = NULL;

    third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 30;
    third->next = NULL;

    head->next = second;
    second->next = third;

    // Insert 50 at end
    fifth = (struct Node*)malloc(sizeof(struct Node));
    fifth->data = 50;
    fifth->next = NULL;

    third->next = fifth;

    // Traversal
    struct Node *ptr = head;

    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    // Free memory
    free(fifth);
    free(third);
    free(second);
    free(head);

    return 0;
}
