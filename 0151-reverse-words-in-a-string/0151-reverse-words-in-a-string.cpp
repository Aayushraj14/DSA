class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";
        int i=0;
        while(s[i]==' ')i++;

        while(i<s.length()){
            string temp="";
            while(i<s.length() && s[i]!=' '){
                temp+=s[i];i++;
            }
            if(temp.size()>0){
                reverse(temp.begin(),temp.end());
                ans=ans+temp+' ';
            }
            i++;
        }
        return ans.substr(0,ans.length()-1);

    }
};