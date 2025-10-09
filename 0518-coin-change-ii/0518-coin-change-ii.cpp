class Solution {
public:
    int solve(int amount, vector<int>& coins,int sum,int i, vector<vector<int>>&dp){
        if(sum==amount)return 1;
       if(sum>amount)return 0;
        if(i==coins.size())return 0;

        if(dp[i][sum]!=-1)return dp[i][sum];
       int inc=solve(amount,coins,sum+coins[i],i,dp);
       int exc=solve(amount,coins,sum,i+1,dp);

        return dp[i][sum]=inc+exc;

    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return solve(amount,coins,0,0,dp);
    }
};