class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>leftheight(height.size());
       
        leftheight[0]=height[0];
        for(int i=1;i<height.size();i++){
           leftheight[i]=max(leftheight[i-1],height[i]);
        }

        vector<int>rightheight(height.size());
       rightheight[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;--i){
           rightheight[i]=max(rightheight[i+1],height[i]);
        }
        int water=0;
        for(int i=1;i<height.size()-1;i++){
            water+=(min(leftheight[i],rightheight[i])-height[i]);
        }
        return water;

    }
};