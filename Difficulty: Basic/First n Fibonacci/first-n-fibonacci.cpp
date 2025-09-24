// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        if(n==1)return {0};
        vector<int>ans(n,-1);
        ans[0]=0;
        ans[1]=1;
        
        for(int i=2;i<n;i++){
            ans[i]=ans[i-1]+ans[i-2];
        }
        return ans;
    }
};