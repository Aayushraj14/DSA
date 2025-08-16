class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;
        vector<int>left(height.size());
        left[0]=height[0];
        for(int i=1;i<height.size();i++){
            left[i]=max(left[i-1],height[i]);
        }

        vector<int>right(height.size());
        right[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;--i){
            right[i]=max(height[i],right[i+1]);
        }

        for(int i=0;i<height.size();i++){
            sum+=min(left[i],right[i])-height[i];
        }
        return sum;
    }
};