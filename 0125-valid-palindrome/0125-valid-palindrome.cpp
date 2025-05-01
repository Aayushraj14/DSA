class Solution {
public:
    bool isPalindrome(string s) {
     int start=0;
     int end=s.length()-1;
     while(start<end){
       char ch1=s[start];
       char ch2=s[end];
       if(!isalnum(ch1))start++;
       else if(!isalnum(ch2))end--;
       else{
       ch1= tolower(ch1);
        ch2=tolower(ch2);
        if(ch1!=ch2){
            return false;
           
        }
        else {
             start++;
            end--;
        }
       }
     }
    return true;
    }
};