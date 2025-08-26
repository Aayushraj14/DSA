class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area=0;
        long long maxDiagonal=0;
        for(int i=0;i<dimensions.size();i++){
            long long diagonal=(1LL*(dimensions[i][0]*dimensions[i][0])+1LL*(dimensions[i][1]*dimensions[i][1]));
            if (diagonal > maxDiagonal || 
   (diagonal == maxDiagonal && dimensions[i][0] *dimensions[i][1] > area)) {
    maxDiagonal = diagonal;
    area =dimensions[i][0] * dimensions[i][1];
}
        }
       return area ;
    }
};