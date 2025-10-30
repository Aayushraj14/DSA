class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size());
        vector<int>right(height.size());

        int leftWall=-1;
        int rightWall=-1;

        for(int i=height.size()-1;i>=0;i--){
            if(height[i]<leftWall)
            left[i]=leftWall;
            else 
            left[i]=-1;
            leftWall=max(leftWall,height[i]);
        }

        for(int i=0;i<height.size();i++){
            if(height[i]<rightWall)
            right[i]=rightWall;
            else 
            right[i]=-1;
            rightWall=max(rightWall,height[i]);
        }

        int sum=0;
        for(int i=0;i<height.size();i++){
            int mini=min(left[i],right[i]);
            if(mini!=-1){
                sum+=mini-height[i];
            }
        }

        return sum;
    }
};