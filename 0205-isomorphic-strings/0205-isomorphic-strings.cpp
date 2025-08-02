class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        map<char,char>mp1;
        map<char,char>mp2;
        for(int i=0;i<s.length();i++){
            if(mp1.count(s[i]) && mp1[s[i]]!=t[i])return false;
             if(mp2.count(t[i]) && mp2[t[i]]!=s[i])return false;
            if(mp1.find(s[i])==mp1.end()){
                mp1[s[i]]=t[i];
            }
             if(mp2.find(t[i])==mp2.end()){
                mp2[t[i]]=s[i];
            }
        }
        string temp="";
        for(int i=0;i<s.length();i++){
            temp+=mp1[s[i]];
        }
        if(temp==t)return true;
        return false;
    }
};