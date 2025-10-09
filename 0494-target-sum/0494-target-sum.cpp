class Solution {
public:
    int ans=0;
    int solve(vector<int>& nums, int target,int sum,int i){
        if(i==nums.size()){
            if(sum==target)
            return 1;
            else 
            return 0;

        }

        int op1=solve(nums,target,sum+nums[i],i+1);
        int op2=solve(nums,target,sum-nums[i],i+1);

        return op1+op2;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,target,0,0);
    }
};