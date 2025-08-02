class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();){
            while(s[i]==' ')i++;
            string temp="";
            while(i<s.length() && s[i]!=' '){
             temp+=s[i];
             i++;}
            if(!temp.empty()){
                reverse(temp.begin(),temp.end());
                ans+=temp+' ';
            }
            i++;
        }
        return ans.substr(0,ans.length()-1);
    }
};