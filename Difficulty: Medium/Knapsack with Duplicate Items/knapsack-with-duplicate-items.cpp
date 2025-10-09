// User function Template for C++

class Solution {
  public:
    int solve(vector<int>& val, vector<int>& wt, int capacity,int i,vector<vector<int>>&dp){
        if(capacity==0)return 0;
        if(capacity<0)return INT_MIN;
        if  (i==val.size())return 0;
        
        if(dp[i][capacity]!=-1)return dp[i][capacity];
        int inc=val[i]+solve(val,wt,capacity-wt[i],i,dp);
        int exc=solve(val,wt,capacity,i+1,dp);
        
        return dp[i][capacity]=max({inc,exc});
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        
        vector<vector<int>>dp(val.size()+1,vector<int>(capacity+1,-1));
        return solve(val,wt,capacity,0,dp);
    }
};