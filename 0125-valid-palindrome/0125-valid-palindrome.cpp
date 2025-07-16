class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<end){
            if(isalnum(s[start])){
                if(isalnum(s[end])){
                    s[start]=tolower(s[start]);
                   s[end]= tolower(s[end]);
                    if(s[start]!=s[end])return false;
                    else{
                        start++;end--;
                    }
                }
                else{
                    end--;
                }
            }
            else{
                start++;
            }
        }
        return true;
    }
};