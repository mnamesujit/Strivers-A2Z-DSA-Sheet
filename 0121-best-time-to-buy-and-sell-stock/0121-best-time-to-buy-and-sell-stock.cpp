class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size(); 
        if(size==1) return 0;

        int maxProfit = 0;
        int minPrice = prices[0];
        for(int i = 1; i < size; i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};