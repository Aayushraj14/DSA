class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums2NGE(nums2.size());
        stack<int>st;
        
        for(int i=nums2.size()-1;i>=0;--i){
           
            
                while(!st.empty() && st.top()<nums2[i])st.pop();
                if(st.empty()){
                nums2NGE[i]=-1;
                st.push(nums2[i]);
                }else{
                nums2NGE[i]=st.top();
                st.push(nums2[i]);
                }
            
        }
        int k=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){k=j; break;}
            }
            nums1[i]=nums2NGE[k];
        }
        return nums1;
    }
};