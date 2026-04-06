#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node *next;
};

int main() {
struct Node *head = NULL, *temp = NULL, *newNode;
int n, i;

printf("Enter number of nodes: ");
scanf("%d", &n);

for(i = 0; i < n; i++) {
newNode = (struct Node*)malloc(sizeof(struct Node));

printf("Enter data for node %d: ", i+1);    
scanf("%d", &newNode->data);    

newNode->next = NULL;    

if(head == NULL) {    
    head = newNode;    
    temp = newNode;    
} else {    
    temp->next = newNode;    
    temp = newNode;    
}

}
struct Node *new;
new->data=5;
new->next=head;

// Traversal
temp = head;
printf("Linked List: ");
while(temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}

return 0;

}
