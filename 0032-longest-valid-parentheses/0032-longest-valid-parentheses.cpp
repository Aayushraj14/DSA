class Solution {
public:
    int longestValidParentheses(string s) {
       int maxLen=0;
        stack<int>st;
        st.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')st.push(i);
            else{
                st.pop();
                if(st.empty()){
                    //no-opening
                    st.push(i);
                }
                else{
                    int len=i-st.top();
                    maxLen=max(maxLen,len);
                }

            }
        }
        return maxLen;
    }
};