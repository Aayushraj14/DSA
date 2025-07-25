/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        int len=0;
        if(head==NULL || head->next==NULL)return len;
        Node *fast=head,*slow=head;
        while(fast!=0 && fast->next!=0){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)break;
        }
        if(slow==fast){
            len=1;
            Node* temp=slow;
            while(temp->next!=slow){
                temp=temp->next;
                len++;
            }
        }
        else{
            return 0;
        }
        return len;
    }
};