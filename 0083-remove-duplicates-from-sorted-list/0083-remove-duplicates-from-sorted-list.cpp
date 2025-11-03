/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*tail=head;
        ListNode* dummyhead=new ListNode(-1);
        ListNode* dummytail=dummyhead;

        while(tail){
            ListNode* temp=tail;
            while(tail && temp->val == tail->val ){tail=tail->next;}
            temp->next=NULL;
            dummytail->next=temp;
            dummytail=dummytail->next;
        }
        return dummyhead->next;
    }
};