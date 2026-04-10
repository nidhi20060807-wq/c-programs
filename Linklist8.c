#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Insert at beginning
void insertBegin(int x) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertEnd(int x) {
    struct Node *newNode = malloc(sizeof(struct Node));
    struct Node *temp = head;

    newNode->data = x;
    newNode->next = NULL;
