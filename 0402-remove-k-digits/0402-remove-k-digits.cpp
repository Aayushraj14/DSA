class Solution {
public:
    string removeKdigits(string num, int k) {
        
        stack<char>st;
        for(int i=0;i<num.length();i++){
            while(!st.empty() && (k>0 && st.top()-'0'>num[i]-'0')){st.pop(); k--;}
           st.push(num[i]);
        }

        while(k){
            st.pop();
            k--;
        }
        if(st.empty())return "0";
        //step 2:
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
         int i = 0;
        while (i < ans.size() && ans[i] == '0') i++;
        ans = ans.substr(i);

        if (ans.empty()) return "0";

        return ans;
    }
};