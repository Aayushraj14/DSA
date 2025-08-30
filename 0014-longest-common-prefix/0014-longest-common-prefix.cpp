class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int minLen=INT_MAX;;
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<minLen)minLen=strs[i].length();
        }
        
        bool flag=false;
        for(int j=0;j<minLen;j++){
            char ch=strs[0][j];
            for(int i=1;i<strs.size();i++){
                if(ch!=strs[i][j])flag=true;
            }
            if(flag)break;
            ans+=ch;
        }
        return ans;
    }
};