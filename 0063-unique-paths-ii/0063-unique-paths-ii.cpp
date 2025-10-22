class Solution {
public:
      int solver(vector<vector<int>>& obstacleGrid,int m,int n,int i,int j, vector<vector<int>>&dp){
        if(i==m-1 && j==n-1)return 1;
        if(i>=m || j>=n || obstacleGrid[i][j] == 1)return 0;

        if(dp[i][j]!=-1)return dp[i][j];
        int ans1=0,ans2=0;
       // if(obstacleGrid[i+1][j]!=1)
         ans1=solver(obstacleGrid,m,n,i+1,j,dp);
        // if(obstacleGrid[i][j+1]!=1)
         ans2=solver(obstacleGrid,m,n,i,j+1,dp);

        return dp[i][j]=ans1+ans2;
    }
   
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
         vector<vector<int>>dp(m,vector<int>(n,-1));
         if (obstacleGrid[0][0] == 1 || obstacleGrid[m - 1][n - 1] == 1) return 0;

        return solver(obstacleGrid,m,n,0,0,dp);
    }
};