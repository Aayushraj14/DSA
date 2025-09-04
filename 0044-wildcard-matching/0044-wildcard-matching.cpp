class Solution {
public:
    bool solve(string &s,string &p,int i,int j, vector<vector<int>>&dp){

        if(i==s.length() && j==p.length())return true;
        if(j==p.length())return false;
        
        if(dp[i][j]!=-1)return dp[i][j];

         if (i == s.length()) {
            // Only valid if remaining pattern is all '*'
            for (int k = j; k < p.length(); k++) {
                if (p[k] != '*') return dp[i][j]=false;
            }
            return dp[i][j]=true;
        }

        if(p[j]=='?' || s[i]==p[j])return dp[i][j]=solve(s,p,i+1,j+1,dp);
        else if(p[j]=='*'){
            //0 matched
            bool op1=solve(s,p,i,j+1,dp);
            //pata nhi kitna match karega
            bool op2=solve(s,p,i+1,j,dp);

            return dp[i][j]=op1||op2;

        }
        else return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        vector<vector<int>>dp(s.length()+1,vector<int>(p.length()+1,-1));
        return solve(s,p,0,0,dp);
    }
};