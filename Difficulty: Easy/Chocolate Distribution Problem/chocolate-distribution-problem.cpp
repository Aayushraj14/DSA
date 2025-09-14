class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        
        int mini=INT_MAX;
        for(int i=0;i+m<=a.size();i++){
            int ans=a[i+m-1]-a[i];
            if(ans<mini)mini=ans;
        }
        return mini;
    }
};