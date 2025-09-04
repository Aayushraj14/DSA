class Solution {
public:
    int solve(string &s,string &t,int i,int j, vector<vector<int>>&dp){
        if (j == t.length()) return 1;  // Found one subsequence
        if (i == s.length()) return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ways=0;
        if(s[i]==t[j]){
            ways+=solve(s,t,i+1,j+1,dp);
        }

        ways+=solve(s,t,i+1,j,dp);
       

        return dp[i][j]=ways;
    }
    int numDistinct(string s, string t) {
        string output="";
        vector<vector<int>>dp(s.length(),vector<int>(t.length(),-1));
        return solve(s,t,0,0,dp);
    }
};