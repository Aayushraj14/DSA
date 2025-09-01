class Solution {
public:
    bool solve(string s,string t,int i,int j, vector<vector<int>>&dp){
        if(i>=s.length())return true;
        if(j>=t.length())return false;


        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==t[j]){
            dp[i][j]=solve(s,t,i+1,j+1,dp);
        }
        else  dp[i][j]=solve(s,t,i,j+1,dp);
        return dp[i][j];
    }
    bool isSubsequence(string s, string t) {
        vector<vector<int>>dp(s.size(),vector<int>(t.size(),-1));
        return solve(s,t,0,0,dp);
    }
};