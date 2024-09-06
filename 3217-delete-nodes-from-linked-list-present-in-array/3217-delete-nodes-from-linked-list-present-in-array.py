# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def modifiedList(self, nums, head):
        hashMap = {}
        for num in nums:
            hashMap[num]=1
        prev = None
        ans = head
        while(head):
            if(hashMap.get(head.val)==1):
                head = head.next
                if(prev):
                    prev.next = head
            else:
                if(prev==None):
                    ans = head
                prev = head
                head = head.next
        return ans
                