class Solution {
public:
    int solve(string &s,string &t,int i,int j,vector<vector<int>>&dp){
        if(i==s.size() || j==t.size())return 0;

        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==t[j]){
            dp[i][j]=1+solve(s,t,i+1,j+1,dp);
        }else{
            int op1=solve(s,t,i+1,j,dp);
            int op2=solve(s,t,i,j+1,dp);
            dp[i][j]=max(op1,op2);
        }
        return dp[i][j];
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        vector<vector<int>>dp(s.length(),vector<int>(t.length(),-1));
        return solve(s,t,0,0,dp);
    }
};