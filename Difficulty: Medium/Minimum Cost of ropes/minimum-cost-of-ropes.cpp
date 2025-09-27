class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto a:arr){
            pq.push(a);
        }
        int totalCost=0;
        while(pq.size()>1){
            int first=pq.top();
            pq.pop();
            
            int second=pq.top();
            pq.pop();
            
            int sum=first+second;
            pq.push(sum);
            totalCost+=sum;
        }
        return totalCost;
    }
};