class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int maxi=0;
        int oneCount=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                oneCount++;
            }else{
                maxi=Math.max(maxi,oneCount);
                oneCount=0;
            }
        }
         maxi=Math.max(maxi,oneCount);
        return maxi;
    }
}