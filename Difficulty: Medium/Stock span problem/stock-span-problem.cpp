class Solution {
  public:
  //prev greater ele
    vector<int> calculateSpan(vector<int>& arr) {
        vector<int>ans;
        ans.push_back(1);
        stack<int>index;
        index.push(0);
        for(int i=1;i<arr.size();i++){
            while(!index.empty() && arr[index.top()]<=arr[i])index.pop();
            if(!index.empty() && arr[i]<arr[index.top()]){
                ans.push_back(i-index.top());
                index.push(i);
            }
            if(index.empty()){
                ans.push_back(i+1);
                index.push(i);
            }
        }
        return ans;
    }
};