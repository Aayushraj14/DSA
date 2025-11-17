class Solution {
  public:
    int solve(int W, vector<int> &val, vector<int> &wt,int i, vector<vector<int>>&dp){
        if(i>=wt.size())return 0;
        if(W<=0)return 0;
        
        if(dp[W][i]!=-1)return dp[W][i];
        int inc=0,exc=0;
        if(W>=wt[i]){
            inc=val[i]+solve(W-wt[i],val,wt,i+1,dp);
        }
        exc=solve(W,val,wt,i+1,dp);
        return dp[W][i]=max(inc,exc);
        
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        vector<vector<int>>dp(W+1,vector<int>(wt.size()+1,-1));
        return solve(W,val,wt,0,dp);
    }
};