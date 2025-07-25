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
    int findLen(ListNode* head){
        int len=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* currnext=curr->next;
            curr->next=prev;
            prev=curr;
            curr=currnext;
        }
        return prev;
    }
    ListNode* solve(ListNode* head, int k,int actualLen){
        if(actualLen<k)return head;

        int pos=k;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL && pos!=0){
            ListNode* currnext=curr->next;
            curr->next=prev;
            prev=curr;
            curr=currnext;
            pos--;
        }
        head->next=solve(curr,k,actualLen-k);
        return prev;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int actualLen=findLen(head);
        return solve(head,k,actualLen);
    }
};