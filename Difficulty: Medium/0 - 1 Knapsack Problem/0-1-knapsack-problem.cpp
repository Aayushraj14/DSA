class Solution {
  public:
    int solve(vector<int>&val,vector<int> &wt,int i,int W,vector<vector<int>>&dp){
        if(W<0 || i>=val.size())return 0;
        
        if(dp[W][i]!=-1)return dp[W][i];
        int inc=0,exc=0;
        if(W-wt[i]>=0){
            inc=val[i]+solve(val,wt,i+1,W-wt[i],dp);
        }
            exc=solve(val,wt,i+1,W,dp);
        
        return dp[W][i]=max(inc,exc);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        vector<vector<int>>dp(W+1,vector<int>(val.size()+1,-1));
        return solve(val,wt,0,W,dp);
        
    }
};