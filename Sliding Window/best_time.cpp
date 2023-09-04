#include <vector>
#include <math.h>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int l = 0;
        int r = 1;
        int profit = 0;
        int maxP = 0;

        while (r < prices.size())
        {
            if (prices[l] < prices[r])
            {
                profit = prices[r] - prices[l];
                maxP = std::max(maxP, profit);
            }
            else
            {
                l = r;
            }
            ++r;
        }

        return maxP;

    }
};