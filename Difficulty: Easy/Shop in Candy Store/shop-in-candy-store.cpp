class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        int minCost=0,maxCost=0;
        sort(prices.begin(),prices.end());
        
        int end=prices.size()-1;
        for(int i=0;i<=end;i++){
            minCost+=prices[i];
            end=end-k;
        }
        int start=0;
        for(int i=prices.size()-1;i>=start;i--){
            maxCost+=prices[i];
            start+=k;
        }
        return {minCost,maxCost};
    }
};