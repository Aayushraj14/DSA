// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        
        vector<int>ans;
        ans.push_back(1);
        if(n==1)return ans;
        
        for(int j=2;j<=n;j++){
            int carry=0;
            for(int i=0;i<ans.size();i++){
                int total=ans[i]*j+carry;
                ans[i]=total%10;
                carry=total/10;
            }
             while (carry) {
                ans.push_back(carry % 10);
                carry /= 10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};