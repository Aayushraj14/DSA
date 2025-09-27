// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto a:arr){
            pq.push(a);
        }
        while(k>1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};