class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                char ch=tolower(s[i]);
                temp.push_back(ch);
            }
        }
        int start=0;
        int end=temp.length()-1;
        while(start<=end){
            if(temp[start]!=temp[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};