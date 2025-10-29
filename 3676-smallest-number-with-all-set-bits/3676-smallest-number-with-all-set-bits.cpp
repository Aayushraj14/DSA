class Solution {
public:
    int smallestNumber(int n) {
        int i=0;
       for( i=0;i<n;i++){
        if(pow(2,i)>n)break;
       }
       return pow(2,i)-1;
    }
};