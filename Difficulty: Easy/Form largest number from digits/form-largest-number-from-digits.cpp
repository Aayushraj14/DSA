class Solution {
  public:
    string MaxNumber(vector<int>& arr) {
        // code here.
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        string ans="";
        for(int i=0;i<arr.size();i++){
            ans+=(arr[i]+'0');
        }
        return ans;
    }
};