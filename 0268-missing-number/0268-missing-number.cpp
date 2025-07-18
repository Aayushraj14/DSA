class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum=0;
        for(int i=0;i<=nums.size();i++)totalSum+=i;

        int sum=accumulate(nums.begin(),nums.end(),0);
        return totalSum-sum;
    }
};