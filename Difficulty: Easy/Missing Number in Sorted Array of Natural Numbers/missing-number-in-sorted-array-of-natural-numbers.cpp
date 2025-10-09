class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // Code here
        int totalSum=accumulate(arr.begin(),arr.end(),0);
        
        int sum=0;
        for(int i=1;i<=arr.size()+1;i++){
            sum+=i;
        }
        return sum-totalSum;
    }
};