class Solution {
public:
    int solve(vector<int>& energy, int i,int k,  vector<int>&dp){
        if(i>=energy.size())return 0;
        if(dp[i]!=INT_MIN)return dp[i];
        int take=energy[i]+solve(energy,i+k,k,dp);
        return dp[i]=take;
    }
    int maximumEnergy(vector<int>& energy, int k) {
        vector<int>dp(energy.size(),INT_MIN);
        int ans=INT_MIN;
        for(int i=0;i<energy.size();i++){
            ans=max(ans,solve(energy,i,k,dp));
        }
        return ans;
    }
};