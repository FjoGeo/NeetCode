#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<int> subset;
        std::vector<std::vector<int>> result;

        dfs(nums, 0, subset, result);
        return result;
    }

private:
    void dfs(std::vector<int>& nums, int start, std::vector<int> subset, std::vector<std::vector<int>>& result)
    {
        result.push_back(subset);
        for (int i = start; i < nums.size(); i++)
        {
            subset.push_back(nums[i]);
            dfs(nums, i+1, subset, result);
            subset.pop_back();
        }
    }
};