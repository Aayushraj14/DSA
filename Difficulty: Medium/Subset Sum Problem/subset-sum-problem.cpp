class Solution {
  public:
    bool solve(vector<int>& arr, int n,int sum, vector<vector<int>>&dp){
        if(sum==0)return true;
        if(n==0)return false;
        
        if(dp[n][sum]!=-1)return dp[n][sum];
        
        if(arr[n-1]>sum)return dp[n][sum]=solve(arr,n-1,sum,dp);
        
        bool take=solve(arr,n-1,sum-arr[n-1],dp);
        bool notTake=solve(arr,n-1,sum,dp);
        
        return dp[n][sum]=(take || notTake);
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
       int n=arr.size();
       vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
       
       return solve(arr,n,sum,dp);
    }
};