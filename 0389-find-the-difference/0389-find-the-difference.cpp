class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
       
   
        for(int i=0;i<s.length();i++){
            for(int j=0;j<t.length();j++){
                if(s[i]==t[j]){
                    string temp=t.substr(0,j)+t.substr(j+1,t.length());
                    t="";
                    t+=temp;
                    break;
                }
            }
        }
       
       return t[0];
    }
};