class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        int n=grid.size();
        vector<int>nums(n*n,-1);
        int repeating=0,missing=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                int index=grid[i][j];
                if( nums[index-1]==-1)nums[index-1]=0;
                else repeating=index;
               
            }
        }
        for(int i=0;i<n*n;i++){
            if(nums[i]==-1)missing=i+1;
        }
        ans={repeating,missing};
        return ans;
    }
};