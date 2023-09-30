class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        # res = 0
        # while n:
        #     res += n % 2 #count 1s
        #     n = n >> 1 # shift to the right
        # return res


        # fancy version
        res = 0
        while n:
            res += 1
            n = n & (n-1)
        return res