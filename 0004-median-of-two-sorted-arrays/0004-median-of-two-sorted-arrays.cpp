class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>ans(m+n);
        int i=0;
        int j=0;
        int k=0;
        for(k=0;k<m+n && i<m && j<n;k++){
            if(nums1[i]<nums2[j]){
                ans[k]=nums1[i];
                i++;
            }
            else{
                ans[k]=nums2[j];
                j++;
            }
        }
        while(i<m){
            ans[k]=nums1[i];
            k++;i++;
        }
        while(j<n){
            ans[k]=nums2[j];
            k++;j++;
        }
        int start=0;
        int end=ans.size()-1;
        if(ans.size()%2==0){
            int mid=(start+end)/2;
            return double(ans[mid]+ans[mid+1])/2;
        }else{
            double result=(start+end)/2;
            return ans[result];
        }
    }
};