class Solution {
public:
    string toLowerCase(string s) {
        int i=0;
        while(i<s.length()){
            
            if(s[i]>=65 && s[i]<91){
                s[i]+=32;
            }
            i++;
        }
        return s;
    }
};