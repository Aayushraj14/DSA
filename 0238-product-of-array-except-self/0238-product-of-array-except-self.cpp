class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int>prefixProduct(nums.size());
         prefixProduct[0]=1;
         vector<int>suffixProduct(nums.size());
         suffixProduct[nums.size()-1]=1;
         vector<int>ans;

         int pp=1;
         for(int i=1;i<nums.size();i++){
            pp*=nums[i-1];
            prefixProduct[i]=pp;
         }
         int sp=1;
         for(int i=nums.size()-2;i>=0;i--){
            sp*=nums[i+1];
            suffixProduct[i]=sp;
         }
         for(int i=0;i<nums.size();i++){
            ans.push_back(prefixProduct[i]*suffixProduct[i]);
         }
         return ans;
    }
};