class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        if(nums.size()==1)return nums[0];
        while(start<=end){
            int mid=(start+end)/2;
            if(mid==0 && nums[mid] !=nums[mid+1])return nums[0];
            if(mid==nums.size()-1 && nums[mid]!=nums[mid-1])return nums[mid];
            if(mid>0 && mid<nums.size()-1 && nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])return nums[mid];
            int even=mid%2;//0 for even and 1 for odd
            if(even==0){
                if(nums[mid]==nums[mid-1])end=mid-1;
                else start=mid+1;
            }else{
                if(nums[mid]==nums[mid-1])start=mid+1;
                else end=mid-1;
            }

        }
        return -1;
    }
};