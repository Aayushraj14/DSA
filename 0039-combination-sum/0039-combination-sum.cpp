class Solution {
public:
set<vector<int>>result;
void solve(vector<int>& candidates, int target,int i,vector<int>&ans,int sum){
    if(sum>target)return;
    if(i>=candidates.size()){
        if(sum==target)result.insert(ans);
        return;
    }
    ans.push_back(candidates[i]);
    sum+=candidates[i];
    solve(candidates,target,i,ans,sum);
    ans.pop_back();

    sum-=candidates[i];

     solve(candidates,target,i+1,ans,sum);
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        solve(candidates,target,0,ans,0);
         vector<vector<int>>ans2;
         for(auto a:result)ans2.push_back(a);
        return ans2;
    }
};