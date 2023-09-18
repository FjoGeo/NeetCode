class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        
        res = []

        def dfs(i, cur, total): # pointer i, cur = what value were added , total = sum of cur
            # base case = success
            if total == target:
                res.append(cur.copy())
                return 
            
            # not possible to meet the target value
            if i >= len(candidates) or total > target:
                return
            
            cur.append(candidates[i])

            print(f"before first dfs call: {res}")
            dfs(i, cur, total + candidates[i])
            print(f"after first dfs call: {res}")

            # clean up and go to the other decison on the tree
            cur.pop()


            print(f"before second dfs call: {res}")
            dfs(i+1, cur, total) # total says the same, because no value was added
            print(f"after second dfs call: {res}")

        dfs(0, [], 0)

        return res
    


Solution().combinationSum([2,3,6,7], 7)