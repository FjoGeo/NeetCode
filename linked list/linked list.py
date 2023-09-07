# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        # # solution with two pointers

        # prev, current = None, head # head is the first value of the linked list

        # while current:
        #     next_value = current.next # temp variable to store the next value, because the it will be reversed
        #     current.next = prev 
        #     prev = current 
        #     current = next_value
        # return prev # prev is the new head
    

        # recursive solution

        if not head:
            return None
        
        newHead = head 
        if head.next: # head is not empty
            newHead = self.reverseList(head.next) # sets head also to next head
            head.next.next = head # reverses the link 
        head.next = None 
        return newHead

