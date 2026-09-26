class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int cheapest_price = prices[0];

        for(int i=0;i<prices.size();i++){
            int cheapest_price=min(cheapest_price,prices[i]);
            profit=max(profit,prices[i]-cheapest_price);
            
        } 
        return profit;       
    }
};
