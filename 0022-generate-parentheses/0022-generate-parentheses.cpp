class Solution {
public:
    bool valid(string s){
        string temp="";
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')st.push(s[i]);
            else{
                if(st.empty())return false;
                else{
                    st.pop();
                }
            }
        }
        if(st.size()>0)return false;
        else return true;
    }
    void solve(vector<string>&ans,int n,string output){
        if(output.length()>=2*n){
            if(valid(output)){
                ans.push_back(output);
               
            }
             return;
        }
        char ch1='(';
        output.push_back('(');
        solve(ans,n,output);
        output.pop_back();
        char ch2=')';
        output.push_back(')');
        solve(ans,n,output);



    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string output="";
        solve(ans,n,output);
        return ans;
    }
};