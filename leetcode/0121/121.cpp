class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int tmp  = prices[0];
        int diff = 0;
        for(int i = 1; i < prices.size(); ++i){
            if(prices[i] < tmp){
                tmp = prices[i];
                continue;
            }
            diff = max(diff,(prices[i]-tmp));
        }
        return diff;
    }
};
