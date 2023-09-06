class Solution:
    def search(self, nums: list[int], target: int) -> int:
        
        # wrong solution
        # hashMap = {}


        # for i,v in enumerate(nums):
        #     hashMap[v] = i

        # if target in nums:
        #     return hashMap[target]
        # else:
        #     return -1


        if target not in nums:
            return -1
        
        l = 0
        r = len(nums) -1


        while l <= r:
            m = (r - l) // 2

            if nums[m] > target:
                r = m -1
            elif nums[m] < target:
                l = m +1
            else:
                return m
            

        
        return -1

