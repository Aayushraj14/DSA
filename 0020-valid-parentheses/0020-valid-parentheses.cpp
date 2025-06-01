class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.length()%2!=0)return false;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.size()==0)return false;
                if(ch==')' && st.top()=='(')st.pop();
                else if(ch=='}' && st.top()=='{')st.pop();
                else if(ch==']' && st.top()=='[')st.pop();
                else {
                //mismatch
                return false;
            }
            }
           
            
        }
        if(st.size()>0)return false;
        else return true;
    }
};