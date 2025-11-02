class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1;
        set<int>st2;

        for(int i=0;i<nums1.size();i++){
            st1.insert(nums1[i]);
        }

         for(int i=0;i<nums2.size();i++){
            st2.insert(nums2[i]);
        }
        vector<int>ans1;
        // for(int i=0;i<nums1.size();i++){
        //     if(st2.find(nums1[i])==st2.end()){
        //         ans1.push_back(nums1[i]);
        //     }
        // }

        for(auto i:st1){
             if(st2.find(i)==st2.end()){
                ans1.push_back(i);
            }
        }
        vector<int>ans2;
        for(auto i:st2){
             if(st1.find(i)==st1.end()){
                ans2.push_back(i);
            }
        }
        // for(int i=0;i<st2.size();i++){
        //     if(st1.find(nums2[i])==st1.end()){
        //         ans2.push_back(nums2[i]);
        //     }
        // }
        vector<vector<int>>ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};