class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxWindow=0;
        int i=0;
        for(int j=0;j<s.length();j++){
            for(int k=i;k<j;k++){
                if(s[k]==s[j]){
                    i=k+1;break;
                }
            }
            maxWindow=max(maxWindow,j-i+1);
        }
        return maxWindow;
    }
};