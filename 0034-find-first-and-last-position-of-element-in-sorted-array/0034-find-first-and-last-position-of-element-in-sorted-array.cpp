class Solution {
public:
    int lower(vector<int>&nums,int target){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if(nums[mid]>target)end=mid-1;
            else{
                start=mid+1;
            }
        }
        return ans;
    }
    int upper(vector<int>&nums,int target){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)start=mid+1;
            else end=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)return {-1,-1};
        int lowerBound=lower(nums,target);
        int upperBound=upper(nums,target);
        vector<int>ans;
        ans.push_back(lowerBound);
        ans.push_back(upperBound);
        return ans;

    }
};