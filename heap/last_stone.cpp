#include <vector>
#include <queue>
#include <functional>

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        std::priority_queue<int> pq;
        for (int i=0; i< stones.size(); i++)
        {
            pq.push(stones[i]);
        }

        while (pq.size() > 1)
        {
            int y = pq.top();
            pq.pop();

            int x = pq.top();
            pq.pop();

            if (x != y)
            {
                pq.push(y-x);
            }

        }

        if (pq.size() == 0) return 0;
        return pq.top();
    }
};