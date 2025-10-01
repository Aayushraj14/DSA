class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int ans=0;
        
        int filled=numBottles;
        int empty=0;
        int totalBottle=filled+empty;

        while(totalBottle>=numExchange || filled>0){
            ans+=filled;
            empty+=filled;
            filled=empty/numExchange;
            empty=empty%numExchange;
            totalBottle=filled+empty;
        }
        return ans;
    }
};