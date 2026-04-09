#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    // 🔷 Create list: 5 → 10 → 15 → 20
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 5;

    struct Node *n2 = malloc(sizeof(struct Node));
    n2->data = 10;

    struct Node *n3 = malloc(sizeof(struct Node));
    n3->data = 15;

    struct Node *n4 = malloc(sizeof(struct Node));
    n4->data = 20;

    // Linking
    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

  

    struct Node *temp = head;

    while(temp->next != NULL && temp->next->data != 10) {
        temp = temp->next;
    }

    if(temp->next != NULL
