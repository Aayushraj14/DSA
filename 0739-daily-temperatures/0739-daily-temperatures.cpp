class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size());
        vector<int>greter(temperatures.size(),-1);
        stack<int>st;
        for(int i=temperatures.size()-1;i>=0;i--){
           while(!st.empty() && temperatures[st.top()]<=temperatures[i])st.pop();
           if(st.empty()){
                st.push(i);
           }
           else{
            greter[i]=st.top();
            st.push(i);
           }

        }
        for(int i=0;i<temperatures.size();i++){
            if(greter[i]==-1){
                ans[i]=0;
            }
            else{
                ans[i]=greter[i]-i;
            }
        }
        return ans;
    }
};