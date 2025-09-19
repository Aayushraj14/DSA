class Solution {
public:
int totalSum=0;
    int solve(vector<int>& nums,int i,int curr){
        if(i>=nums.size())return curr;

        int inc=solve(nums,i+1,nums[i]^curr);
        
        int exc=solve(nums,i+1,curr);
        return inc+exc;
    }
    int subsetXORSum(vector<int>& nums) {
        int curr=0;
       return  solve(nums,0,curr);
       
    }
};