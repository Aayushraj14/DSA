class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans1;
        vector<int>ans2;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)ans1.push_back(nums[i]);
            else{
                ans2.push_back(nums[i]);
            }
        }
        int k=0;
        for(int i=0;i<nums.size();i=i+2){
            nums[i]=ans1[k];
            nums[i+1]=ans2[k];
            k++;
        }
        return nums;
    }
};