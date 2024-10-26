class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];
        int profit = 0;
        for(int i = 0; i<prices.size(); i++){
            // for(int j=i+1; j<prices.size();j++){
            //     int profit = prices[j]-prices[i];
            //     if(profit>max_profit){
            //         max_profit = profit;
            //     }
            // }
            if(buy_price>prices[i]){
                buy_price = prices[i];
            }
            profit = max(profit, prices[i]-buy_price);
        }
        return profit;
    }
};
