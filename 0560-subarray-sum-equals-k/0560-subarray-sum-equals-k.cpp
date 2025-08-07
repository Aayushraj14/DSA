class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp.insert({0,1});

        int result=0;
        int comSum=0;
        for(int i=0;i<nums.size();i++){
            comSum+=nums[i];
            if(mp.find(comSum-k)!=mp.end()){
                result+=mp[comSum-k];
            }
           mp[comSum]++;
        }
        return result;
    }
};