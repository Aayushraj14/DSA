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
    ListNode* reverse(ListNode*head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr){
            ListNode* currnext=curr->next;
            curr->next=prev;
            prev=curr;
            curr=currnext;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);

        int carry=0;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* head=NULL;
        ListNode* tail=NULL;
        while(temp1 && temp2){
            int totalSum=temp1->val+temp2->val+carry;
            carry=totalSum/10;
            ListNode* temp=new  ListNode(totalSum%10);
            if(head==NULL){
               head=tail=temp;
            }
            else{
                tail->next=temp;
                tail=tail->next;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1){
            int totalSum=temp1->val+carry;
            carry=totalSum/10;
            ListNode* temp=new  ListNode(totalSum%10);
            tail->next=temp;
            tail=tail->next;
            temp1=temp1->next;
        }
         while(temp2){
            int totalSum=temp2->val+carry;
            carry=totalSum/10;
            ListNode* temp=new  ListNode(totalSum%10);
            tail->next=temp;
            tail=tail->next;
            temp2=temp2->next;
        }
        while(carry){
            ListNode* temp=new  ListNode(carry%10);
            tail->next=temp;
            tail=tail->next;
            carry=carry/10;
        }
        head=reverse(head);
        return head;

    }
};