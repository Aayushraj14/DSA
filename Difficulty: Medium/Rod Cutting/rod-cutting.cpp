// User function Template for C++

class Solution {
  public:
    int solve(vector<int> &price, vector<vector<int>>&dp,int N,int i){
        if(N==0)return 0;
        if(N<0 || i>=price.size())return INT_MIN;
        
        if(dp[i][N]!=-1)return dp[i][N];
        
        //ussi ko continue karo
        int op1=price[i]+solve(price,dp,N-i-1,i);
        int op2=price[i]+solve(price,dp,N-i-1,i+1);
        int op3=solve(price,dp,N,i+1);
        
        return dp[i][N]=max(op1,max(op2,op3));
    }
    int cutRod(vector<int> &price) {
        
        vector<vector<int>>dp(price.size(),vector<int>(price.size()+1,-1));
        return solve(price,dp,price.size(),0);
        
    }
};