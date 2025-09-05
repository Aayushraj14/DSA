class Solution {
  public:
    string encode(string s) {
        // code here
        int count=0;
        string ans="";
        char last=s[0];
        for(int i=0;i<s.length();i++){
            if(s[i]!=last){
                ans+=last;
                ans+=to_string(count);
                
                last=s[i];
                count=1;
            }else{
                count++;
            }
        }
       ans+=last;
        ans+=to_string(count);
        return ans;
    }
};