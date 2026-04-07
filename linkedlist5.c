void deleteAtEnd(struct Node **head) {
    if (*head == NULL) return;

    struct Node *temp = *head;

    // only one node
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }

    // traverse to second last
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}
