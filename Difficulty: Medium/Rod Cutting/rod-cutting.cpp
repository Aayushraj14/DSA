// User function Template for C++

class Solution {
  public:
    int solve(vector<int> &price,int i,int len, vector<vector<int>>&dp){
        
        if(i>=price.size() || len<=0)return 0;
       
        if(dp[i][len]!=-1)return dp[i][len];
        int inc=0,exc=0;
       if(len-(i+1)>=0)
         inc=price[i]+solve(price,i,len-i-1,dp);
         exc=solve(price,i+1,len,dp);
         
         return dp[i][len]=max(inc,exc);
        
    }
    int cutRod(vector<int> &price) {
        // code here
        int len=price.size();
        vector<vector<int>>dp(price.size(),vector<int>(price.size()+1,-1));
        return solve(price,0,len,dp);
    }
};