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
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    int pairSum(ListNode* head) {
        int n=findLen(head);
        
        vector<int>nums;
        ListNode* temp=head;
        while(temp!=NULL){
            int res=temp->val;
            nums.push_back(res);
            temp=temp->next;
        }
        //cout<<nums[0];
        vector<int>half;
        for(int i=0;i<n/2;i++){
            int res=nums[i]+nums[n-1-i];
            half.push_back(res);
        }
        sort(half.begin(),half.end());
        return half[half.size()-1];
    }
};