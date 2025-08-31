class Solution {
public:
    bool solve(vector<int>& nums,int target,int i, vector<vector<int>>&dp){
        if(target==0)return true;
        if(i>=nums.size() || target<0)return false;

        if(dp[i][target]!=-1)return dp[i][target];

        bool include=solve(nums,target-nums[i],i+1,dp);
        bool exclude=solve(nums,target,i+1,dp);
        return dp[i][target]=(include || exclude);
    }

    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto num:nums){
            sum+=num;
        }
        if(sum%2!=0)return false;
        int target=sum/2;
        int i=0;

        vector<vector<int>>dp(nums.size(),vector<int>(sum/2+1,-1));
        return solve(nums,target,i,dp);
    }
};