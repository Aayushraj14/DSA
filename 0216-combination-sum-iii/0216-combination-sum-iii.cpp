class Solution {
public:
    set<vector<int>>st;
    void solve(vector<int>&nums,int n,int i,vector<int>&ans,int sum,int k){
        
        if(n==sum && ans.size()==k){
            st.insert(ans);return;
        }
if(i>=nums.size()||sum>n||ans.size()>k)return;
        ans.push_back(nums[i]);
        solve(nums,n,i+1,ans,sum+nums[i],k);
        ans.pop_back();
        solve(nums,n,i+1,ans,sum,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans;
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        solve(nums,n,0,ans,0,k);

        vector<vector<int>>result;
        for(auto s:st)result.push_back(s);
        return result;
    }
};