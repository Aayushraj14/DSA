class Solution {
public:
    bool rotateString(string s, string goal) {
        int rotate=0;
        while(rotate<s.length()){
            char ch=s[0];
            if(s==goal)return true;

            for(int i=1;i<s.length();i++){
                s[i-1]=s[i];
            }
            s[s.length()-1]=ch;
            rotate++;
        }
        return false;
    }
};