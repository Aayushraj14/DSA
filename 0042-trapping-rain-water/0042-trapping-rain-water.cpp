class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>PrevGE(height.size());
        vector<int>nextGE(height.size());

        int prev=0;
        int next=0;

        for(int i=0;i<height.size();i++){
           
            if(height[i]>prev)prev=height[i];
             PrevGE[i]=prev;
        }

        for(int i=height.size()-1;i>=0;i--){
            
            if(height[i]>next)next=height[i];
            nextGE[i]=next;
        }

       int ans=0;
        for(int i=1;i<height.size()-1;i++){
             ans+=(min(PrevGE[i],nextGE[i])-height[i]);
             
           
        }
        return ans;
    }
};