class Solution {
public:
    int binarySearch(vector<int>& potions,int spells,long long success){
        int start=0;
        int end=potions.size()-1;
        int ans=potions.size();;
        while(start<=end){
            int mid=(start+end)/2;
            if(1LL*potions[mid]*spells<success){
               
                start=mid+1;
            }else{
                ans=mid;
                end=mid-1;
            }

        }
        return ans;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
         vector<int> ans;
         sort(potions.begin(),potions.end());

         for(int i=0;i<spells.size();i++){
            int count=0;
            // for(int j=0;j<potions.size();j++){
            //     long ans=1L*spells[i]*potions[j];
            //     if(ans>=success)count++;
            // }
            int index=binarySearch(potions,spells[i],success);
            count=potions.size()-(index);
            ans.push_back(count);
         }
         return ans;
    }
};