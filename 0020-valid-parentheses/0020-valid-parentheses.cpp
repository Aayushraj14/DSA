class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(st.empty() && (s[i]==')' || s[i]=='}' || s[i]==']'))return false;
            else if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.top()=='(' && ch==')')st.pop();
                else if(st.top()=='{' && ch=='}')st.pop();
                else if(st.top()=='[' && ch==']')st.pop();
                else{
                    return false;
                }
            }
        }
        return (st.empty())?true:false;
    }
};