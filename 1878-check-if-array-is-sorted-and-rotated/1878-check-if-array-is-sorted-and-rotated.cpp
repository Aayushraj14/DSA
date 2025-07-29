class Solution {
public:
    bool check(vector<int>& nums) {
        int k=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1])k=i;
        }
        int n=nums.size();
        reverse(nums.begin(),nums.end());
        int s=n-k;
        reverse(nums.begin(),nums.begin()+s);
        reverse(nums.begin()+s,nums.end());

        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1])return false;
        }
        return true;
    }
};