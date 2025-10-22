class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>ans2;
        for(auto n:nums){
            if(n%k==0)ans2.insert(n);
        }
        vector<int>ans;
        for(auto a:ans2)ans.push_back(a);
        sort(ans.begin(),ans.end());

        int j=1;
        for(int i=0;i<ans.size();i++){
            int sol=k*j;
            if(ans[i]!=sol)return sol;
            j++;
        }
        return k*j;
    }
};