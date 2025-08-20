class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>rightSmall(heights.size());
        stack<int>st1;
        for(int i=heights.size()-1;i>=0;--i){
            while(!st1.empty() && heights[st1.top()]>=heights[i])st1.pop();

           rightSmall[i]=(st1.empty())?heights.size():st1.top();
            st1.push(i);
        }

        vector<int>leftSmall(heights.size());
        stack<int>st2;
        for(int i=0;i<heights.size();i++){
            while(!st2.empty() && heights[st2.top()]>=heights[i])st2.pop();
            leftSmall[i]=(st2.empty())?-1:st2.top();
            st2.push(i);
        }

        int ans=0;
        for(int i=0;i<heights.size();i++){
            int area=heights[i]*(rightSmall[i]-leftSmall[i]-1);
            ans=max(ans,area);
        }
        return ans;

    }
};