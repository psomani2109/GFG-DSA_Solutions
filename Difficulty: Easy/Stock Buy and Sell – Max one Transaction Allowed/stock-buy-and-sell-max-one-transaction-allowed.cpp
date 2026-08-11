class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int buy=0, sell, max_profit=0;
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i]>prices[buy])
            {
                sell=i;
                max_profit=max(max_profit, prices[sell]-prices[buy]);
            }
            else if(prices[i]<prices[buy])
            {
                buy=i;
            }
            
        }
        return max_profit;
    }
};
