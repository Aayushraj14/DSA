class Solution {
public:
    bool palindrome(string s,int start,int end){
        // int start=0;
        // int end=s.length()-1;

        while(start<=end){
            if(s[start]!=s[end])return false;
            start++;
            end--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(palindrome(s,i,j))count++;
            }
        }
        return count;
    }
};