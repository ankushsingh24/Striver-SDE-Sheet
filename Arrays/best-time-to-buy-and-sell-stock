class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int a = INT_MIN;;
        int b = INT_MAX;
        
        for(int i = 0; i < prices.size(); i++)
        {
            b = min(b, prices[i]);
            a = max(a, prices[i] - b);
        }
        
        return a;
    }
};
