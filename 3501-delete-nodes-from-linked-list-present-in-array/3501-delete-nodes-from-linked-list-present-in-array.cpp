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
    bool binarySearch(vector<int>& nums,int target){
        int start=0,end=nums.size()-1;

        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]>target)end=mid-1;
            else start=mid+1;
        }
        return false;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int>nums2;
        ListNode*tail=head;

        while(tail){
            nums2.push_back(tail->val);
            tail=tail->next;
        }
        ListNode*head2=new ListNode(-1);
        ListNode*tail2=head2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums2.size();i++){
            //bool flag=false;
            // for(int j=0;j<nums.size();j++){
            //     if(nums2[i]==nums[j])flag=true;
            // }
            bool flag=binarySearch(nums,nums2[i]);
            if(flag==false){
                tail2->next=new ListNode(nums2[i]);
                tail2=tail2->next;
            }
        }
        return head2->next;
    }
};