class Solution {
public:
    bool solve(vector<int>& nums,int i,int sum, vector<vector<int>>&dp){
        if(sum==0)return true;
        if(sum<0 || i>=nums.size())return false;

        if(dp[i][sum]!=-1)return dp[i][sum];
        bool inc=solve(nums,i+1,sum-nums[i],dp);
        bool exc=solve(nums,i+1,sum,dp);

        return dp[i][sum]=inc||exc;
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)return false;

        vector<vector<int>>dp(nums.size()+1,vector<int>(sum/2+1,-1));
        return solve(nums,0,sum/2,dp);

    }
};