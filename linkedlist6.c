void deleteByValue(struct Node **head, int key) {
    struct Node *temp = *head;
    struct Node *prev = NULL;

    // if head node itself holds the key
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    // search for the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return; // key not found

    prev->next = temp->next;
    free(temp);
}
