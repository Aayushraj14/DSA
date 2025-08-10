class Solution {
  public:
    bool isvalid(vector<int>&arr,int start,int end,int mid,int k){
        int student=1;
        int page=0;
        for(int i=0;i<arr.size();i++){
            if(student>k || arr[i]>mid)return false;
            if(page+arr[i]<=mid){
                page+=arr[i];
            }else{
                student++;
                if(student>k)return false;
                page=0;
                page+=arr[i];
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
         if (arr.size() < k) return -1;
        // code here
        int totalSum=0;
        for(auto num:arr){
            totalSum+=num;
        }
        int start=0;
        int end=totalSum;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(isvalid(arr,start,end,mid,k)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};