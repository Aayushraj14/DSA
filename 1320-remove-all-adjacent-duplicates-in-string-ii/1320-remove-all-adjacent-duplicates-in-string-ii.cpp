class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
               char ch=s[i];
               int num=1;
               st.push(make_pair(ch,num));
            }
            else{
                if(st.top().first==s[i]){
                    st.top().second++;
                }else{
                    char ch=s[i];
                    int num=1;
                    st.push(make_pair(ch,num));
                }
            }

            if(st.top().second==k)st.pop();
        }
        string ans="";
        while(!st.empty()){
            for(int i=0;i<st.top().second;i++){
                ans+=st.top().first;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
};