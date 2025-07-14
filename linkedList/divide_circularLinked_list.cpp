void splitCircularList(Node* head, Node*& head1, Node*& head2) {
    if (head == NULL || head->next == head) {
        // Only 0 or 1 node, return as single circular list
        head1 = head;
        head2 = NULL;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    // Find middle using slow-fast pointers
    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // For even number of nodes
    if (fast->next->next == head) {
        fast = fast->next;
    }

    // First half
    head1 = head;
    head2 = slow->next;

    // Make both halves circular
    slow->next = head1;
    fast->next = head2;
}
