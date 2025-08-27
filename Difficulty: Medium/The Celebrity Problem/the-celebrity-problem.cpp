class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int ans=-1;
        vector<int>nums;
        for(int i=0;i<mat.size();i++){
            mat[i][i]=1;
            int sum=0;
            int j=0;
            for(j=0;j<mat[i].size();j++){
                sum+=mat[i][j];
            }
            if(sum==0)nums.push_back(-1);
            
            else nums.push_back(sum);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==-1)return -1;
            if(nums[i]==1 || nums[i]==0)ans=i;
        }
        for(int i=0;i<mat.size();i++){
            if(mat[i][ans]==0)return -1;
        }
        return ans;
    }
};