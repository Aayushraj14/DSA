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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* head=new ListNode(-1);
        ListNode* tail=head;

        int carry=0;
        while(temp1 && temp2){
            int totalSum=temp1->val + temp2->val + carry;
            carry=totalSum/10;
            ListNode* a=new ListNode(totalSum % 10);

            tail->next=a;
            tail=tail->next;

            temp1=temp1->next;
            temp2=temp2->next;
        }

        while(temp1){
            int totalSum=temp1->val+carry;
            carry=totalSum/10;
            ListNode* a=new ListNode(totalSum % 10);

            tail->next=a;
            tail=tail->next;

            temp1=temp1->next;
        }

        while(temp2){
             int totalSum= temp2->val+carry;
            carry=totalSum/10;
            ListNode* a=new ListNode(totalSum % 10);

            tail->next=a;
            tail=tail->next;

            temp2=temp2->next;
        }
        while(carry){
             ListNode* a=new ListNode(carry % 10);
            carry/=10;
            tail->next=a;
            tail=tail->next;
        }
        return head->next;
    }
};