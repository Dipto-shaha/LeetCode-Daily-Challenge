# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
        
    def isSubPath(self, head, root):
        def checkPath(head,root):
            if (head == None) : return True
            if (root == None) : return False
            return head.val == root.val and ( checkPath(head.next, root.left) or checkPath(head.next, root.right))
        if (head == None) : return True
        if (root == None) : return False
        return checkPath(head,root) or self.isSubPath(head, root.left) or self.isSubPath(head, root.right)

        