class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>dp(2, vector<int>(prices.size(), 0));
        dp[0][0]= 0-prices[0];
        dp[1][0]= 0;
        for(int i=1; i<prices.size(); i++){
            dp[0][i]= max(dp[0][i-1], dp[1][i-1]-prices[i]);
            dp[1][i]= max(dp[1][i-1], dp[0][i-1]+ prices[i]- fee);
        }
        return dp[1][prices.size()-1];
    }
};