// User function Template for C++

class Solution {
  public:
    int solve(vector<int>& val, vector<int>& wt, int capacity, vector<vector<int>>&dp,int i){
        if(capacity<0)return INT_MIN;
        if(i>=wt.size() || capacity==0)return 0;
        
        if(dp[i][capacity]!=-1)return dp[i][capacity];
        //ussi ko call karo
        int op1=val[i] + solve(val,wt,capacity-wt[i],dp,i);
        //include
        int op2=val[i]+solve(val,wt,capacity-wt[i],dp,i+1);
        //exclude
        int op3=solve(val,wt,capacity,dp,i+1);
        
        return dp[i][capacity]=max(op1,max(op2,op3));
        
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<vector<int>>dp(wt.size(),vector<int>(capacity+1,-1));
        int i=0;
        return solve(val,wt,capacity,dp,i);
    }
};