class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        int value=nums.size()/3;
        
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>value)ans.push_back(nums[i]);
           mp[ nums[i]]=0;
        }
        return ans;
    }
};