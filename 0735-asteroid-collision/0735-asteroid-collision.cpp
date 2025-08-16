class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        int i=0;
       while(i<asteroids.size()){
            int topElement;
            if(st.empty()){
                st.push(asteroids[i]);
                i++;
            }
           
            else if(st.top()>0 && asteroids[i]<0){
                topElement=st.top();
                if(st.top()==abs(asteroids[i])){
                    st.pop();
                    i++;
                    continue;
                }
                int result=max(topElement,abs(asteroids[i]));
                if(result==topElement)i++;
                else{
                    st.pop();
                }

            }
           
            else{
                st.push(asteroids[i]);
                i++;
            }

        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};