class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int fullBottle=numBottles;
        int emptyBottle=0;
        int totalBottle=0;
        while(fullBottle!=0 || emptyBottle>=numExchange){
            totalBottle+=fullBottle;
            emptyBottle+=fullBottle;
            fullBottle=0;
            if(emptyBottle>=numExchange){
                fullBottle+=1;
                emptyBottle-=numExchange;
            }
            numExchange+=1;
        }
        return totalBottle;
    }
};