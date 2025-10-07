class Solution {
  public:
    bool solve(vector<int>& arr, int i,int sum, vector<vector<int>>&dp){
        if(sum==0)return true;
        if(sum < 0) return false;

        if(i>=arr.size())return false;
        
        
        if(dp[i][sum]!=-1)return dp[i][sum];
        bool ans1=solve(arr,i+1,sum-arr[i],dp);
        bool ans2=solve(arr,i+1,sum,dp);
        
        return dp[i][sum]=ans1||ans2;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        vector<vector<int>>dp(arr.size()+1,vector<int>(sum+1,-1));
        return solve(arr,0,sum,dp);
        
    }
};