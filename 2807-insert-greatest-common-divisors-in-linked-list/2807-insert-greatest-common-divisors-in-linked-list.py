# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def gcd(self,a,b):
        if b == 0 :
            return a
        if a == 0:
            return b
        else: return self.gcd(b, a % b)
    def insertGreatestCommonDivisors(self, head):
        ans = head
        while head:
            if(head and head.next):
                temp = head.next
                head.next = ListNode(self.gcd(head.val,head.next.val),temp)
                head = temp
            else: break
        return ans
                
        