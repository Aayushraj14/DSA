class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>arr(1);
        arr[0]=0;
        for(int i=0;i<gain.size();i++){
            arr.push_back(arr[i]+gain[i]);
        }
        priority_queue<int>pq;
        for(auto n:arr){
            pq.push(n);
        }
        return pq.top();
    }
};