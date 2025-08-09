class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int repeating;
        int missing;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]>0){
                repeating=arr[i];
                break;
            }
            else{
                mp[arr[i]]++;
            }
        }
        int totalSum=0,sum=0;
        for(int i=1;i<=arr.size();i++){
            totalSum+=i;
            sum+=arr[i-1];
        }
        missing=totalSum-(sum-repeating);
        return {repeating,missing};
    }
};