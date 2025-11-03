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
    int leng(ListNode *head){
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* solve(ListNode*head,int k,int actualLen){
        //if(head==NULL && head->next==NULL)return head;
        if(actualLen<k)return head;


        //1-step
        ListNode *prev=NULL;
        ListNode *curr=head;
        int len=k;
        while(len>=1 && curr){
            ListNode* currnext=curr->next;
            curr->next=prev;
            prev=curr;
            curr=currnext;
            len--;

        }

        head->next=solve(curr,k,actualLen-k);
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len=leng(head);
        return solve(head,k,len);
    }
};