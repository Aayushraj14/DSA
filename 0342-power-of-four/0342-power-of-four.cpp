class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0)return false;
        int start=0;
        int end=15;
        while(start<=end){
            int mid=(start+end)/2;
            int result=pow(4,mid);
            if(result==n)return true;
            else if(result>n)end=mid-1;
            else start=mid+1;
        }
        return false;
    }
};