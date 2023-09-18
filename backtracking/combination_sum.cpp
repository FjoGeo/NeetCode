#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int> cur;
        vector<vector<int>> res;

        dfs(candidates, target, 0,0, cur, res);
        return res;
    }

private:
    void dfs(vector<int>& candidates, int target, int sum, int start, vector<int>& cur, vector<vector<int>>& res)
    {
        if (sum > target)
        {
            return;
        }
        if (sum == target)
        {
            res.push_back(cur);
            return;
        }
        for (int i = start; i < candidates.size(); i++)
        {
            cur.push_back(candidates[i]);
            dfs(candidates, target, sum + candidates[i], i, cur, res);
            cur.pop_back();
        }
    }
};