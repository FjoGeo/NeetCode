class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        # solution 1
        # s = s.lower()
        # s = ''.join([i for i in s if i.isalnum()])
        # return s == s[::-1]


       # solution 2
        l = 0
        r = len(s)

        while l < r:
           
            while l < r and not self.alphaNum(s[l]):
               l += 1
            while r > l and not self.alphaNum(s[r]):
               r -= 1


            if s[l].lower() != s[r].lower():
               return False
            l, r = l + 1, r -1

        return True 

        def alphaNum(self, c):
            return (ord('A') <= ord(c) <= ord('Z') or
                    ord('a') <= ord(c) <= ord('z') or
                     ord('0') <= ord(c) <= ord('9'))