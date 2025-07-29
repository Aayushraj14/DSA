class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum=0;
        int sum=0;
        for(auto num:nums){
            sum+=num;
        }
        for(int i=0;i<=nums.size();i++){
            totalSum+=i;
        }
        return totalSum-sum;
    }
};