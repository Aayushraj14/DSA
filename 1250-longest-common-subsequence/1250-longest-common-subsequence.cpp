class Solution {
public:
    int solve(string &text1,int i, string &text2,int j, vector<vector<int>>&dp){
        if(i>=text1.length() || j>=text2.length())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int op1=0,op2=0,op3=0;
        if(text1[i]==text2[j]){
            dp[i][j]=op1=1+solve(text1,i+1,text2,j+1,dp);
        }else{
            op2=solve(text1,i,text2,j+1,dp);
            op3=solve(text1,i+1,text2,j,dp);
            dp[i][j]=max(op2,op3);
            }

        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.length()+1,vector<int>(text2.length()+1,-1));
        return solve(text1,0,text2,0,dp);
    }
};