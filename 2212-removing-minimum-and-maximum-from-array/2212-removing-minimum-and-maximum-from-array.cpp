class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int maxIndex=-1,minIndex=-1;
        int largest=INT_MIN;
        int smallest=INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                largest=nums[i];
                maxIndex=i;
            }
            if(nums[i]<smallest){
                smallest=nums[i];
                minIndex=i;
                }
        }
       
        int right=max(maxIndex,minIndex);
        int left=min(maxIndex,minIndex);

        int frontDelete=right+1;
        int backDelete=nums.size()-left;
        int both=(nums.size()-right)+(left+1);
       
        return min({frontDelete,backDelete,both});
    }
};