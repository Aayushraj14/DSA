class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        int count=0;
        while(n){
            if((n&1)==1)count++;
            n=n>>1;
        }
        if(count==1)return true;
        return false;
    }
};