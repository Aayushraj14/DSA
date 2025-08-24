// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Write your code here
        stack<string>st;
        for(int i=pre_exp.length()-1;i>=0;--i){
            char ch=pre_exp[i];
            if(isalpha(ch))st.push(string(1,ch));
            else{
                string temp="(";
                temp+=st.top(); st.pop();
                temp+=ch;
                temp+=st.top(); st.pop();
                temp+=")";
                
                st.push(temp);
            }
        }
        string ans=st.top();
        return ans;
    }
};