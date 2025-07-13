// User function Template for C++
class Solution {
  public:
    void solve(string &s,int i,string & ans){
        if(i==s.length())return;
        solve(s,i+1,ans);
        ans+=s[i];
    }
    string reverseString(string& s) {
        int i=0;
        string ans="";
        solve(s,i,ans);
        return ans;
        
        
    }
};
