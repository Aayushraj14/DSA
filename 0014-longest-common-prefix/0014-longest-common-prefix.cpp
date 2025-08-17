class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLength=INT_MAX;
        for(int i=0;i<strs.size();i++){
            minLength=min(minLength,int(strs[i].size()));
        }
        string ans="";
        for(int j=0;j<minLength;j++){
            char ch=strs[0][j];
            for(int i=1;i<strs.size();i++){
                if(ch!=strs[i][j])return ans;
            }
            ans+=ch;
        }
        return ans;
    }
};