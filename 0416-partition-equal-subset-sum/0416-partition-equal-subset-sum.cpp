class Solution {
public:
    bool solve(vector<int>& nums,int i, int totalSum,int target,vector<vector<int>>&dp){
        if(totalSum==target)return true;
        if(totalSum<target || i>=nums.size())return false;

        if(dp[i][totalSum]!=-1)return dp[i][totalSum];
        bool ans1=solve(nums,i+1,totalSum-nums[i],target,dp);
        bool ans2=solve(nums,i+1,totalSum,target,dp);

        return dp[i][totalSum]=(ans1||ans2);
    }
    bool canPartition(vector<int>& nums) {
        int totalSum=accumulate(nums.begin(),nums.end(),0);
        int target=totalSum/2;
        if(totalSum%2!=0)return false;

        vector<vector<int>>dp(nums.size()+1,vector<int>(totalSum+1,-1));
        return solve(nums,0,totalSum,target,dp);
    }
};