class Solution {
public:
    vector<vector<int>>result;
    bool check(vector<int>ans){
        for(auto num:result){
            if(ans==num)return true;
        }
        return false;
    }
    void solve(vector<int>& nums,vector<int>ans,int i) {
        if(i>=nums.size()){
           if(!check(ans)){
            result.push_back(ans);
           }
           return;
        }

        ans.push_back(nums[i]);
        solve(nums,ans,i+1);
        ans.pop_back();
        solve(nums,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        solve(nums,ans,i);
        return result;
    }
};