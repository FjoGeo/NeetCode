class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        cost.append(0)

        for i in range(len(cost) - 3, -1, -1):
            cost[i] = cost[i] + min( cost[i +1], cost[i +2])

        return min(cost[0], cost[1])

#         sum = 0
#         l_pointer = -2
#         r_pointer = -1

#         while (l_pointer * -1) < len(cost):
#             if cost[l_pointer] < cost[r_pointer] or cost[l_pointer] == cost[r_pointer]:
#                 sum += cost[l_pointer]
#                 l_pointer -= 2
#                 r_pointer -= 2
#             else:
#                 sum += cost[r_pointer]
#                 l_pointer -= 1
#                 r_pointer -= 1

#         print(sum)
#         return sum

