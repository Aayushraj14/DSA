class Solution {
public:
    int solve(vector<int>&nums,int index,vector<int>&dp){
        if(index>=nums.size())return 0;
        if(dp[index]!=-1)return dp[index];
        int op1=solve(nums,index+1,dp);
        int op2=nums[index]+solve(nums,index+2,dp);
        dp[index]= max(op1,op2);
        return dp[index];
    }
    int rob(vector<int>& nums) {
        int i=0;
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,i,dp);
    }
};