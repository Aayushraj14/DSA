class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
         vector<int>ans;
         ans.push_back(arr[0]);
         int k=0;
         for(int i=1;i<arr.size();i++){
             if(ans[k]!=arr[i]){
                 k++;
                 ans.push_back(arr[i]);
             }
         }
         return ans;
    }
};