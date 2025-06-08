class Solution {
public:
    int firstUniqChar(string s) {
        int ch[26]={0};
        for(int i=0;i<s.length();i++){
            ch[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(ch[s[i]-'a']==1)return i;
        }
        return -1;
    }
};