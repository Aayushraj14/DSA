class Solution {
  public:
    void removeLoop(Node* head) {
        if (head == NULL || head->next == NULL) return;

        Node *slow = head, *fast = head;

        // Detect loop
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }

        if (slow == fast) {
            slow = head;

            // Special case: loop starts at head
            if (slow == fast) {
                while (fast->next != slow)
                    fast = fast->next;
            } else {
                // Find node just before loop starting point
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }

            // Remove loop
            fast->next = NULL;
        }
    }
};