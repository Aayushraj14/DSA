// User function Template for C++
class Solution {
  public:
    long long int commDiv(long long int a, long long int b) {
        // code here
        long long int count=0;
        long long int last=min(a,b);
        for(int i=1;i<=last;i++){
            if(a%i==0 && b%i==0)count++;
        }
        return count;
    }
};