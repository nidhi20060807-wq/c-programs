#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    struct Node *head = NULL;
    struct Node *ptr = NULL;
    int choice = 1;

    // 🔷 Create list
    while(choice) {

        struct Node *newNode = malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            ptr = newNode;
        } else {
            ptr->next = newNode;
            ptr = newNode;
        }

        printf("Continue? (1/0): ");
        scanf("%d", &choice);
    }

    // 🔷 Delete first node
    struct Node *temp = head;
    head = head->next;
    free(temp);

    // 🔷 Display list
    struct Node *temp1 = head;
    while(temp1 != NULL) {
        printf("%d -> ", temp1->data);
        temp1 = temp1->next;
    }

    printf("NULL");

    return 0;
}
