class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        int num=n;
        int ans=1;
        while(num){
            if((num & 1)==0){
                //ans*=10;
                break;
            }
            ans=ans<<1;
            num=num>>1;
        }
        return (n|ans);
    }
};