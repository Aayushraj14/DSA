// User function Template for C++

class Solution {
  public:
    int solve(vector<int> &price,int i,int len,vector<vector<int>>&dp){
        if(len<0)return INT_MIN;
        if(len==0)return 0;
        if(i==price.size())return 0;
        
        
        if(dp[i][len]!=-1)return dp[i][len];
        int incR=price[i]+solve(price,i,len-(i+1),dp);
        //int inc=price[i]+solve(price,i+1,len-(i+1));
        int exc=solve(price,i+1,len,dp);
        
        return dp[i][len]=max({exc,incR});
    }
    int cutRod(vector<int> &price) {
        // code here
        
       
        int n=price.size();
         vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(price,0,n,dp);
    }
};