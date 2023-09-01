class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        hash_s, hash_m = {}, {}

        for i in range(len(s)):
            hash_s[s[i]] = 1 + hash_s.get(s[i], 0)
            hash_m[t[i]] = 1 + hash_m.get(t[i], 0)


        for c in hash_s:
            if hash_s[c] != hash_m.get([c],0):
                return False
                
                
        return True
    


# cheating:
# class Solution:
#     def isAnagram(self, s: str, t: str) -> bool:
#         return Counter(s) == Counter(t)