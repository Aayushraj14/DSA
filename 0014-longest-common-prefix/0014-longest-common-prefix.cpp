class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen=INT_MAX;
        for(int i=0;i<strs.size();i++){
            minLen=min(minLen,(int)strs[i].length());
        }
        string ans="";
        
        for(int j=0;j<minLen;j++){
                char temp=strs[0][j];
            for(int i=1;i<strs.size();i++){
                if(strs[i][j]!=temp)return ans;
            }
            ans+=temp;
        }
        return ans;
    }
};