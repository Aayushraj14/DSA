class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=0;
        for(int i=0;i<nums.size();){
            if(nums[start]!=nums[i]){
                swap(nums[start+1],nums[i]);
                start++;
                i++;
            }
            else{
                i++;
            }
        }
        return start+1;
    }
};