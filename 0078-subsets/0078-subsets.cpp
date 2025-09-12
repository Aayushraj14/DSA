class Solution {
public:
    set<vector<int>>st;
    void solve(vector<int>& nums,int i,vector<int>&ans){
        if(i==nums.size()){
            st.insert(ans);
            return;
        }
        ans.push_back(nums[i]);
        solve(nums,i+1,ans);
        ans.pop_back();

        solve(nums,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        solve(nums,0,ans);

         vector<vector<int>>result;
        for(auto s:st){
            result.push_back(s);
        }
        return result;
    }
};