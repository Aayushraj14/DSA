class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0)positive.push_back(nums[i]);
            else negative.push_back(nums[i]);
        }
        int j=0;
        for(int i=0;i<nums.size();i=i+2){
            nums[i]=positive[j];
            nums[i+1]=negative[j];
            j++;
        }
        return nums;
    }
};