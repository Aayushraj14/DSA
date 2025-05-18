class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

       vector<vector<int>>ans;
       for(int j=0;j<col;j++){
            vector<int>ans2;
        for(int i=0;i<row;i++){
            ans2.push_back(matrix[i][j]);
        }
        ans.push_back(ans2);
       }
       return ans;

        
    }
};