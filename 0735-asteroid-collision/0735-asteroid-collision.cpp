class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;

        for(int i=0;i<asteroids.size();i++){
            int flag=0;
            while( !st.empty() && asteroids[i]<0 && st.top()>0){
                if(abs(asteroids[i])>st.top()){
                st.pop();
                continue;
               }
               else if(abs(asteroids[i])==st.top()){
                st.pop();
                flag=1;
               }
              
                flag=1; break;

            }
            if(flag==0)
            st.push(asteroids[i]);
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};