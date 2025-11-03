class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int totalSum=accumulate(neededTime.begin(),neededTime.end(),0);
        stack<int>st;

        int i=0;
        int sum=0;
        while(i<neededTime.size()){
            if(st.empty()){
                st.push(i);
                i++;
                continue;
            }
            else if(!st.empty() && colors[st.top()]==colors[i]){
                if(neededTime[i]>neededTime[st.top()]){
                    st.top()=i;
                }
                i++;
                continue;
            }
            else{
                st.push(i);
                i++;
            }
            
        }
        while(!st.empty()){
            sum+=neededTime[st.top()];
            st.pop();
        }
        return totalSum-sum;
    }
};