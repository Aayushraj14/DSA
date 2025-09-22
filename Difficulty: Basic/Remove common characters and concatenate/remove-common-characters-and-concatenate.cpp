class Solution {
  public:
    string concatenatedString(string s1, string s2) {
        //  code here
        string ans="";
        for(int i=0;i<s1.length();i++){
            if(find(s2.begin(),s2.end(),s1[i])==s2.end())ans+=s1[i];
        }
        
        for(int i=0;i<s2.length();i++){
            if(find(s1.begin(),s1.end(),s2[i])==s1.end())ans+=s2[i];

        }
        if(ans.length()==0)return "-1";
        return ans;
    }
};