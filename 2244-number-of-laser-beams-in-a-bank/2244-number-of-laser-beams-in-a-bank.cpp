class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
       
        vector<int>nums;
        for(int i=0;i<bank.size();i++){
            int count=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1')count++;
            }
            if(count==0)continue;
            nums.push_back(count);
        }
        if(nums.size()<=1)return 0;
        for(int i=0;i<nums.size()-1;i++){
            ans+=nums[i]*nums[i+1];
        }
        return ans;
    }
};