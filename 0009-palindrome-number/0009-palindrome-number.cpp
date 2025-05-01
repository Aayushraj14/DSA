class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long y=abs(x);
        long store=0;
        while(y>0){
            store=store*10+y%10;
           
            y=y/10;
        }
        if(x==store)return true;
        return false;
    }
};