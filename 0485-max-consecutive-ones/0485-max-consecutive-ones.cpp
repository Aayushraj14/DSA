class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxOne=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)count=0;
            else{
                count++;
                maxOne=max(maxOne,count);
            }
        }
        return maxOne;
    }
};