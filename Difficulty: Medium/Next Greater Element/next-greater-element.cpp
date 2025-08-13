class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int>ans(arr.size());
        stack<int>st;
        st.push(-1);
        for(int i=arr.size()-1;i>=0;i--){
            while(st.top()!=-1 && st.top()<=arr[i])st.pop();
            
            ans[i]=st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};