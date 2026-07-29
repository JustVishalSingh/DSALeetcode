class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy=prices[0];
        int maxp=0;
        for(int i=0; i<prices.size(); i++){
            if(bestBuy<prices[i]){
                maxp=max(maxp, prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy, prices[i]);
           
        }
        return maxp;
    }
};