class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int start=0;
        int end=height.size()-1;

        while(start<end){
            int len=min(height[start],height[end]);
            int bre=end-start;
            int newArea=len*bre;
            if(newArea>area)area=newArea;

            if(height[start]<height[end])start++;
            else end--;
        }
        return area;
    }
};