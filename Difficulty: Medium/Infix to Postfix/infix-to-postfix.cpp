class Solution {
public:
    int precedence(char ch) {
        if (ch == '^') return 3;
        if (ch == '*' || ch == '/') return 2;
        if (ch == '+' || ch == '-') return 1;
        return -1;
    }

    string infixToPostfix(string& s) {
        string ans = "";
        stack<char> st;

        for (char ch : s) {
            if (isalnum(ch)) {
                ans += ch;
            }
            else if (ch == '(') {
                st.push(ch);
            }
            else if (ch == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop(); // pop '('
            }
            else {
                while (!st.empty() && st.top() != '(' &&
                       precedence(ch) <= precedence(st.top())) {
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};