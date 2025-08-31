class Solution {
  public:
    int solve(vector<int>& arr, int target,int i, vector<vector<int>>&dp){
       if (i == (int)arr.size()) return (target == 0) ? 1 : 0;
        if(target <0 || i>=arr.size())return 0;
        
        if(dp[i][target]!=-1)return dp[i][target];
        
        int include = 0;
        if(arr[i] <= target)
            include = solve(arr, target - arr[i], i+1, dp);
        int exclude=solve(arr,target,i+1,dp);
        
        return dp[i][target]=(include+exclude);
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
        return solve(arr,target,0,dp);
    }
};