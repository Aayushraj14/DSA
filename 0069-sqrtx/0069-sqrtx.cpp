class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        int left=0;
        int right=x;
        int ans=0;
        while(left<=right){
            int mid=(left+right)/2;
            if(mid==x/mid)return mid;
            else if(mid > x/mid){
                right=mid-1;
            }
            else{
                ans=mid;
                left=mid+1;
            }
        }
        return ans;
    }
};