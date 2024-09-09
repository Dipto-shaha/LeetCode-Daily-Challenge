# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def spiralMatrix(self, m, n, head):
        ans = [[-1 for _ in range(n)] for _ in range(m)]
        start=0
        while head:
            for i in range(start,n-start):
                if not head :
                    break
                ans[start][i]=head.val
                head = head.next
            for i in range(start+1,m-start-1):
                if not head :
                    break
                ans[i][n-start-1]= head.val
                head = head.next
                
            for i in range(n-1-start,start-1,-1):
                if not head : 
                    break
                ans[m-start-1][i]=head.val
                head = head.next
                
            for i in range(m-1-start-1,start,-1):
                if not head : 
                    break
                ans[i][start]=head.val
                head = head.next
            start+=1
        return ans
            
        