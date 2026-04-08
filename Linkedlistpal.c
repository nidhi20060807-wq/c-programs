int isPalindrome(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    struct Node* second = reverse(slow);

    while (second) {
        if (head->data != second->data)
            return 0;
        head = head->next;
        second = second->next;
    }
    return 1;
}
