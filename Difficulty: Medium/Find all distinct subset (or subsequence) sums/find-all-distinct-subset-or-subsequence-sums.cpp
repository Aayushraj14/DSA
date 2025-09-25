class Solution {
  public:
    void solve(vector<int>&nums,int i,set<int>&st,int sum, vector<vector<int>>&dp){
        if(i==nums.size()){
            st.insert(sum);
            return;
        }
        if(dp[i][sum]==1)return;
         dp[i][sum] = 1;
         solve(nums,i+1,st,sum+nums[i],dp);
         solve(nums,i+1,st,sum,dp);
        
        
    }
    vector<int> DistinctSum(vector<int> nums) {
        // Code here
        set<int>st;
        int sum=0;
         for (int x : nums) sum += x;
        vector<vector<int>>dp(nums.size()+1,vector<int>(sum+1,0));
        solve(nums,0,st,0,dp);
        vector<int>ans;
        for(auto s:st){
            ans.push_back(s);
        }
        return ans;
    }
};