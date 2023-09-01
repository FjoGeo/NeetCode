#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> map;
        std::vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (map.find(diff) != map.end()) // If the condition map.find(diff) != map.end() is true, it means that the complement diff was found in the map,
            {
                result.push_back(map[diff]);
                result.push_back(i);
                break;
            }
            else
            {
                map.insert({nums[i], i});
            }
        }
        return result;
    }

};