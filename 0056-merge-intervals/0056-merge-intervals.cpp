class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
            vector<int>first={intervals[0][0],intervals[0][1]};
            result.push_back(first);
            int index=0;
        for(int i=1;i<intervals.size();i++){
            if(result[index][1]>=intervals[i][0]){
                result[index][1] = max(result[index][1], intervals[i][1]);
            }
            else{
                vector<int>ans={intervals[i][0],intervals[i][1]};
                result.push_back(ans);
                index++;
            }
        }
        return result;
    }
};