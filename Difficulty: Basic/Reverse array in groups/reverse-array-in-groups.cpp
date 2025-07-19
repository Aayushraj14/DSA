class Solution {
  public:
    void solve(vector<int>&arr,int k,int start){
        if(start>=arr.size())return;
        if (start + k >= arr.size()){
            reverse(arr.begin()+start,arr.end());
            return;
        }
        else
        reverse(arr.begin()+start,arr.begin()+start+k);
        solve(arr,k,start+k);
    }
    void reverseInGroups(vector<int> &arr, int k) {
        int start=0;
        return solve(arr,k,start);
        
    }
};
