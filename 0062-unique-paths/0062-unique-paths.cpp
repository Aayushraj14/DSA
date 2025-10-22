class Solution {
public:
    int solver(int m,int n,int i,int j, vector<vector<int>>&dp){
        if(i==m-1 && j==n-1)return 1;
        if(i>=m || j>=n)return 0;

        if(dp[i][j]!=-1)return dp[i][j];
        int ans1=solver(m,n,i+1,j,dp);
        int ans2=solver(m,n,i,j+1,dp);

        return dp[i][j]=ans1+ans2;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solver(m,n,0,0,dp);
    }
};