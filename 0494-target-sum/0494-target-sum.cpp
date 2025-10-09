class Solution {
public:
    int ans=0;
    int solve(vector<int>& nums, int target,int sum,int i,vector<vector<int>>&dp, int offset){
        if(i==nums.size()){
            if(sum==target)
            return 1;
            else 
            return 0;

        }
        if(dp[i][sum+offset]!=-1)return dp[i][sum +offset];

        int op1=solve(nums,target,sum+nums[i],i+1,dp,offset);
        int op2=solve(nums,target,sum-nums[i],i+1,dp,offset);

        return dp[i][sum+offset]=op1+op2;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
         int offset = totalSum;
        vector<vector<int>> dp(nums.size(), vector<int>(2 * totalSum + 1, -1));
        return solve(nums,target,0,0,dp,offset);
    }
};