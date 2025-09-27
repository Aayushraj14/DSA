class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto a:arr)pq.push(a);
        
        for(int i=0;i<arr.size();i++){
            arr[i]=pq.top();
            pq.pop();
        }
    }
};