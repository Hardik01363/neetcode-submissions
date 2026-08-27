class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        int i = 0;
        int j = 1;
        while(j<prices.size()) {
            int profit = prices[j] - prices[i];
            if(profit <= 0) i = j;
            else if(profit > maxp) maxp = profit;
            j++;
        }
        return maxp;
    }
};
