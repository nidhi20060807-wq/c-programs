// Delete from beginning
void deleteBegin() {
    if(head == NULL) return;

    struct Node *temp = head;
    head = head->next;
    free(temp);
}

// Delete from end
void deleteEnd() {
    if(head == NULL) return;

    struct Node *temp = head;

    if(temp->next == NULL) {
        free(temp);
        head = NULL;
        return;
    }

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}
