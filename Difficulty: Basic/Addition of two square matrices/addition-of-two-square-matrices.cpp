// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        // Code here
        int row=matrixA.size();
        int col=matrixA[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                matrixA[i][j]+=matrixB[i][j];
            }
        }
    }
};