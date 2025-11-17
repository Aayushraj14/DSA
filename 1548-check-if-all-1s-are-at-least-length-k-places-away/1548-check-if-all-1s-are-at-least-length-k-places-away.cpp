class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last=0;
        int i=0;
        while(i<nums.size() && nums[i]!=1)i++;
        last=i;

        for(int j=i+1;j<nums.size();j++){
            if(nums[j]==1){
                if(j-last-1 < k)return false;
                else last=j;
            }
        }
        return true;
    }
};