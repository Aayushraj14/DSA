// User function template for C++
class Solution {
  public:
    int solve(vector<int>& arr,int i, vector<int>&dp){
        if(i>=arr.size())return 0;
        
        if(dp[i]!=-1)return dp[i];
        int include=arr[i]+solve(arr,i+2,dp);
        int exclude=solve(arr,i+1,dp);
        
        return dp[i]=max(include,exclude);
    }
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        // code here
        vector<int>dp(arr.size()+1,-1);
        return solve(arr,0,dp);
    }
};