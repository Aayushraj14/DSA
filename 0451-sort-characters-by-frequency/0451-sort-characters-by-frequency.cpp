class Solution {
public:
    string frequencySort(string s) {
        string ans="";

        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }

        vector<pair<char,int>>nums;
        for(int i=0;i<mp.size();i++){
            nums.push_back({i,mp[i]});
           
        }
         sort(nums.begin(), nums.end(), [](auto &a, auto &b) {
            return a.second > b.second; // highest freq first
        });
        for(int i=0;i<nums.size();i++){
            int no=nums[i].second;
            while(no>0){
                ans+=nums[i].first;
                no--;
            }
        }
       // reverse(ans.begin(),ans.end());
        return ans;

    }
};