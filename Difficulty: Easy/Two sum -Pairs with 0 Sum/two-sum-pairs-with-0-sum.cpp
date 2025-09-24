// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        set<vector<int>>st;
        
        int i=0,j=arr.size()-1;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum==0){
                st.insert({arr[i],arr[j]});
                i++;j--;
                
            }
            else if(sum>0){
                j--;
            }
            else i++;
        }
        vector<vector<int>>ans;
        for(auto s:st){
            ans.push_back(s);
        }
        return ans;
    }
};