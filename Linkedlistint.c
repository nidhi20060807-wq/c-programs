struct Node* getIntersection(struct Node* a, struct Node* b) {
    struct Node *p = a, *q = b;

    while (p != q) {
        p = p ? p->next : b;
        q = q ? q->next : a;
    }
    return p;
}
