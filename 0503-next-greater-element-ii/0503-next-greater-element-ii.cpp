class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>arr={nums};
        for(int i=0;i<nums.size()-1;i++){
            arr.push_back(nums[i]);
        }
        
        vector<int>ans(arr.size());
        stack<int>st;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i])st.pop();
            if(st.empty())ans[i]=-1;
            else ans[i]=st.top();

            st.push(arr[i]);
        }
        vector<int>result(nums.size());
        for(int i=0;i<nums.size();i++){
            result[i]=ans[i];
        }
        return result;
    }
};