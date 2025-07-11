class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(n==1 || n==2)return n;
        if(dp[n]!=-1)return dp[n];
        int ans1=solve(n-1,dp);
        int ans2=solve(n-2,dp);
        dp[n]= ans1+ans2;
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};