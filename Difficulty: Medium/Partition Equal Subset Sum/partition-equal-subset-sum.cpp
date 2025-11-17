class Solution {
  public:
    bool solve(vector<int>& arr,int i,int sum,int totalSum,vector<vector<int>>&dp){
        if(sum==totalSum)return true;
        if(i>=arr.size() || sum>totalSum)return false;
        
        if(dp[i][sum]!=-1)return dp[i][sum];
        bool inc=solve(arr,i+1,sum+arr[i],totalSum,dp);
        bool exc=solve(arr,i+1,sum,totalSum,dp);
        
        return dp[i][sum]=(inc || exc);
        
        
    }
    bool equalPartition(vector<int>& arr) {
        // code here
        int totalSum=accumulate(arr.begin(),arr.end(),0);
        if(totalSum%2!=0)return false;
        
        int sum=0;
        totalSum/=2;
        
        vector<vector<int>>dp(arr.size()+1,vector<int>(totalSum+1,-1));
        return solve(arr,0,sum,totalSum,dp);
    }
};