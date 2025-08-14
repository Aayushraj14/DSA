class Solution {
public:
    string largestGoodInteger(string num) {
       
        string ans="";
        int count=0;
        stack<char>st;
        int i=0;
        while(i<num.length()){
            if(st.empty()){
                st.push(num[i]);
                count=1;
            }else{
                if(num[i]==st.top()){
                    count++;
                    st.push(num[i]);
                }else{
                    count=1;
                    st.push(num[i]);
                }
            } i++;
            
            if(count==3){
               ans+=st.top();
                count=0;
            }
           
        }
        if(ans.empty())return "";
        char maxi=ans[0];
        for(int i=0;i<ans.length();i++){
            maxi=max(maxi,ans[i]);
        }
        string result;
        for(int i=0;i<3;i++)result+=maxi;
        return result;
    }
};