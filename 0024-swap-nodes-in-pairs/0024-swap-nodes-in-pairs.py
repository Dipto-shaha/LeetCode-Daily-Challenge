# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def swapPairs(self, head):
        temp=ListNode(0)
        temp=head
        value=0
        while temp and temp.next:
            value=temp.val
            temp.val=temp.next.val
            temp.next.val=value
            temp=temp.next.next
        return head
        