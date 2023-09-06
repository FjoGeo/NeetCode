class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        closedToOpen = { ")" : "(", "]":"[", "}":"{" }

        for c in s:
            if c in closedToOpen:
                # not empty and last one is the opening bracket
                if stack and stack[-1] == closedToOpen[c]:
                    stack.pop()
                else:
                    return False 
            else:
                stack.append(c)


        return True if not stack else False
