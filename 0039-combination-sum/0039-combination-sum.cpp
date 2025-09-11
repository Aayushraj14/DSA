class Solution {
public:
     set<vector<int>>result;
     void solve(vector<int>& candidates, int target,int i,int sum,vector<int>&ans){
        if(sum==target){
            result.insert(ans);
            return;
        }
        if(i==candidates.size() || sum>target){
            return;
        }

        //include the i only
        ans.push_back(candidates[i]);
        solve(candidates,target,i,sum+candidates[i],ans);
        
        solve(candidates,target,i+1,sum+candidates[i],ans);

        ans.pop_back();
        solve(candidates,target,i+1,sum,ans);

     }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        solve(candidates,target,0,0,ans);

         vector<vector<int>>finalAns;
         for(auto c:result){
            finalAns.push_back(c);
         }
         return finalAns;
    }
};