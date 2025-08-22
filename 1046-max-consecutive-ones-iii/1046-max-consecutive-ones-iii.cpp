class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // agar 0 aaya then k-- 
        // agar 0 ko remove kiya then k++
        int i=0,j=0;
        int maxWindow=0;
        while(j<nums.size()){
            int curr=j;
            if(k>0){
                if(nums[j]==0)k--;
                j++;
            }
            else if(k==0){
                if(nums[j]==1)j++;
                else{
                    if(nums[i]==0)k++;
                    i++;
                }
            }
            

            maxWindow=max(maxWindow,curr-i+1);
        }
            return maxWindow;
    }
};