class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0; 
        int sale=1;
        int maxprofit=0;
        while(sale<prices.size()){
            if(prices[sale]>prices[buy]){
                int profit=prices[sale]-prices[buy];
                maxprofit=max(profit,maxprofit);
            }
            else{
                buy=sale;
            }
            sale++;
        }
    return maxprofit;   
    }
};
