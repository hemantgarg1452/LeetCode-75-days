class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxProfit = 0;

        for(int i=0; i<prices.size(); ++i){
            mini = min(mini, prices[i]);
            int profit = prices[i]-mini;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};