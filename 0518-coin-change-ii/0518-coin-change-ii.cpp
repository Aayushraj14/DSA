class Solution {
public:
    int solve(int amount,vector<int>&coins,vector<vector<int>>&dp,int i){
        if(amount==0)return 1;
        if( i>=coins.size() || amount<0)return 0;
        if(dp[i][amount]!=-1)return dp[i][amount];
        
        
            int op1=solve(amount,coins,dp,i+1);
            int op2=solve(amount-coins[i],coins,dp,i);
           
            
        
        dp[i][amount]=op1+op2;
        return dp[i][amount];

    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int i=0;
        return solve(amount,coins,dp,i);

    }
};