class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int pIndex=0;
        int nIndex=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pIndex]=nums[i];
                pIndex+=2;
            }
            else{
                ans[nIndex]=nums[i];
                nIndex+=2;
            }
        }
        return ans;
    }
};