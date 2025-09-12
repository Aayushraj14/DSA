class Solution {
public:
    set<vector<int>>st;
    void solve(vector<int>& candidates, int target,int i,int sum,vector<int>&ans){
        if(sum==target){
            
            st.insert(ans);
            return;
        }
        if(sum>target || i>=candidates.size())return;

        ans.push_back(candidates[i]);
        solve(candidates,target,i+1,sum+candidates[i],ans);
        ans.pop_back();
        //fase
        int next = i+1;
        while(next < candidates.size() && candidates[next] == candidates[i]) next++;
        solve(candidates,target,next,sum,ans);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ans;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,0,ans);

        vector<vector<int>>result;
        for(auto s:st){
           
            result.push_back(s);
        }
        return result;
    }
};