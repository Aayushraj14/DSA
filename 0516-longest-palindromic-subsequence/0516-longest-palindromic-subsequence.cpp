class Solution {
public:
    int solve(string &s,string &t,int i,int j, vector<vector<int>>&dp){
        if(i>=s.length() || j>=t.length())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int op1=0,op2=2,op3=0;
        if(s[i]==t[j]){
           dp[i][j]= op1=1+solve(s,t,i+1,j+1,dp);
        }
        else{
            op2=solve(s,t,i+1,j,dp);
            op3=solve(s,t,i,j+1,dp);
            dp[i][j]=max(op2,op3);
        }
        return dp[i][j];

    }
    int longestPalindromeSubseq(string s) {
         string t=s;
        reverse(t.begin(),t.end());
        vector<vector<int>>dp(s.length()+1,vector<int>(t.length()+1,-1));
       
        return solve(s,t,0,0,dp);
    }
};