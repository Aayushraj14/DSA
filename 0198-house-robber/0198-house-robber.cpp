class Solution {
public:
    int solve(vector<int>&nums,vector<int>&dp,int i){
        if(i>=nums.size())return 0;

        if(dp[i]!=-1)return dp[i];
        int op1=solve(nums,dp,i+1);
        int op2=nums[i]+solve(nums,dp,i+2);
        dp[i]=max(op1,op2);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        int i=0;
       return solve(nums,dp,i);
        
    }
};