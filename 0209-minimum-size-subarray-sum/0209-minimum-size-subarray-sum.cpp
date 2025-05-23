class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLength=INT_MAX;
        int start=0;
        int end=0;
        int sum=0;
        while( end<nums.size()){
            sum+=nums[end];
            
            while(sum>=target){
                minLength=min(end-start+1,minLength);
                sum-=nums[start];
                start++;
            }
            end++;
        }
        return (minLength==INT_MAX)?0:minLength;
    }
};