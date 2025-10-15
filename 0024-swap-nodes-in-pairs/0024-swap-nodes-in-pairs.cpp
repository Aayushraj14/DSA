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
    ListNode* helper(ListNode* curr,ListNode*prev){
        if(curr==NULL || curr->next==NULL)return curr;

        prev=curr;
        curr=curr->next;
        ListNode* currnext=curr->next;
        curr->next=prev;
        prev->next=helper(currnext,prev);
        return curr;
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode*prev=NULL;
        return helper(head,prev);
        

    }
};