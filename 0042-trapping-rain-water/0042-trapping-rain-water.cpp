class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size());
        vector<int>right(height.size());
        int maxi=INT_MIN;
        left[0]=0;
        right[height.size()-1]=0;
        for(int i=1;i<left.size();i++){
            maxi=max(maxi,height[i-1]);
            left[i]=maxi;
        }
        maxi=INT_MIN;
        for(int i=right.size()-2;i>=0;i--){
            maxi=max(maxi,height[i+1]);
            right[i]=maxi;
        }
        int ans=0;
        for(int i=0;i<left.size();i++){
            ans+=max(0,min(left[i],right[i])-height[i]);
        }
        return ans;
        
    }
};