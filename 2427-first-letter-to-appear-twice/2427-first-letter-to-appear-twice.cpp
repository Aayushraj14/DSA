class Solution {
public:
    char repeatedCharacter(string s) {
         int ch[26]={0};
        for(int i=0;i<s.length();i++){
            ch[s[i]-'a']++;
            if(ch[s[i]-'a']==2)return s[i];
        }
        return s[0];
    }
};